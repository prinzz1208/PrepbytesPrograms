#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

struct TrieNode {
	
	TrieNode *children[26];
	bool endOfWord; 
	TrieNode(bool endOfWord = false) {
		FOR(i,0,26){
			this->children[i] = nullptr;
		}
		this->endOfWord = false;
	}
};

void insert(TrieNode *root, string str){
	int strIndex;
	int trieIndex;
	int strLength = (int)str.length();
	TrieNode *temp = root;
	for (strIndex = 0; strIndex < strLength; strIndex++)
	{
		trieIndex = str[strIndex] - 'a';
		if(temp->children[trieIndex] == nullptr){
			temp->children[trieIndex] = new TrieNode();
		}
		temp = temp->children[trieIndex];
	}
	temp->endOfWord = true;
	
	
}

void display(TrieNode* root, string str){
	if(root->endOfWord){
		print(str);
		NL;
	}
	
	
	FOR(i,0,26){
		if(root->children[i] != nullptr) {
			
			string key = str+(char)(i+'a');
			display(root->children[i],key);
		}
	}
}
bool search(TrieNode* root, string key){
	int keyIndex;
	int keyLength = key.size();
	int trieIndex; 
	TrieNode *temp = root;
	for(keyIndex = 0; keyIndex < keyLength; keyIndex++){
		trieIndex = key[keyIndex] - 'a';
		if(temp->children == nullptr){
			return false;
		}
		temp = temp->children[trieIndex];
	}
	return (temp != nullptr && temp->endOfWord);
}

bool hasNoChildren(TrieNode *currentNode){
	FOR(i,0,26){
		if(currentNode->children[i] != nullptr)
			return false;
	}
	return true;

}

bool deleteFun(TrieNode *currentNode, string key, int level, int length){
	
	if(currentNode == nullptr){
		print("String does not exist");
		NL;
		return false;
	}
	
	if(level == length){
		currentNode->endOfWord = false;
		if(hasNoChildren(currentNode)){ 
			return true; 
		}
		else{
		  return false;
		}
	}
	else{
		TrieNode *childNode = currentNode->children[key[level]-'a'];
		bool childDeleted = deleteFun(childNode,key,level-1,length);
		if(childDeleted){
			return (currentNode->endOfWord && hasNoChildren(currentNode));
		}
	}
	return false;
}

void driverDelete(TrieNode *root, string key) {
		int length = key.size();
		if(length > 0)
			deleteFun(root,key,0,length);
}
int main()
{
	sync;
	string key[] = {"pre","prep","prepbytes","trie","abcd","azy"};
	TrieNode *root = new TrieNode();
	int m = sizeof(key)/sizeof(key[0]);
	FOR(i,0,m){
		insert(root,key[i]);
	}
	display(root,"");
	if(search(root,"pre"))
		print("Present");
	else
		print("Not Present");
	NL;
	driverDelete(root, "pre");
	print("---------------------------AFTER DELETE-------------------");
	NL;
	if(search(root,"pre"))
		print("Present");
	else
		print("Not Present");

}

