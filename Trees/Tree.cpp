#include <bits/stdc++.h>
using namespace std;

#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

struct node {
	int val;
	node* left;
	node* right;
	
	node(){
		val = 0;
		left = NULL;
		right = NULL;
	}
	
	node(int val){
		this->val = val;
		left = NULL;
		right = NULL;

	}
};

class tree{
	public:
		node* root;
		unordered_map<int,vector<int>> mp;
		bool isCheckSumTree = true;

		tree(){
			root = NULL;
		}
		tree(int val){
			root = new node(val);
		}
		
		void preorder(node* root){
			if(root != NULL){
				print(root->val)<<TAB;
				preorder(root->left);
				preorder(root->right);
			}
		}
		void inorder(node* root){
			if(root != NULL){
				inorder(root->left);
				print(root->val)<<TAB;
				inorder(root->right);
			}
		}
		void postorder(node* root){
			if(root != NULL){
				postorder(root->left);
				postorder(root->right);
				print(root->val)<<TAB;
			}
		}
		
		void level_order(node* root){
			if(root == NULL)
				return;
			queue<node*> q;
			q.push(root);
			while(!q.empty()){
				node* t = q.front();
				cout<<t->val<<"\t";
				q.pop();
				if(t->left!=NULL)
					q.push(t->left);
				if(t->right!=NULL)
					q.push(t->right);
			}
		}
		
		int height(node* root){
			if(root == NULL)
				return 0;
			
			int left_height = 0, right_height = 0;
			left_height = height(root->left);
			right_height = height(root->right);
			return max(left_height,right_height) + 1;
		}
		int size(node* root){
			if(root == NULL)
				return 0;
			
			int left_size = 0, right_size = 0;
			left_size = size(root->left);
			right_size = size(root->right);
			return left_size + right_size + 1;
		}
		node* searchInBST(node* t,int key)
		{
			if(t == NULL)
			  return NULL;
			if(t->val == key)
			  return t;
			if(t->val > key && t->left != NULL)
			  return searchInBST(t->left, key);  
			if(t->val < key && t->right != NULL)
			  return searchInBST(t->right, key);  
			  
			return NULL;

		}

		void findAverageLevel(node* root)
		{
			
			queue<node*> q;
			if(root == NULL)
				return ;
			q.push(root);
			
			int i = 0,k=0,k2 = 0,level,count,sum; 
			while(!q.empty()){
				sum = 0;
				count = 0;
				level = pow(2,i);
			for (int j = k; j < level; j++){
					if(!q.empty()){
						count++;
						node* t = q.front();
						//print(t->val)<<TAB;
						//NL;
						q.pop();
						sum += t->val;
						if( t->left == NULL){
							k2++;
						}else{
							q.push(t->left);
							//count++;
						}
						if( t->right == NULL){
							k2++;
						}else{
							q.push(t->right);
							//count++;
						}
					
					}
				}
				//NL;
				k = k2;
				k2 = 0;
				cout<<(sum / count)<<"\t";
				i++;
				}
		}

		void findAverageLevel2(node* root)
		{
			static int level = 0;
			if ( root == NULL ){
				return;
			}
			mp[level].push_back(root->val);
			level++;
			if(root->left!=NULL){
				findAverageLevel2(root->left);
			}
			if(root->right!=NULL){
				//mp[level+1].push_back(root->right->val);
				findAverageLevel2(root->right);
			}
		}
		
		int checkSumTree(node* root){
			if(root == NULL) {
				return 0;
			}
			int left = 0,right = 0;
			if(root->left != NULL){
				
				left = checkSumTree(root->left);;
			}
			if(root->right != NULL){
				right = checkSumTree(root->right);
;
			}
			if( root->left!=NULL && root->right!=NULL) {
				//print(left+right); NL;
				if ( left + right != root->val){
					isCheckSumTree = false;
				}
			}
			//print(left+right+root->val); NL;
		

			return left+right+root->val;
			
		}
};

int main()
{
	sync;
	tree t(48);
	//tree t(9);
	t.root->left = new node(12);
	//t.root->left = new node(7);
	t.root->right = new node(12);
	//t.root->right = new node(5);
	t.root->left->left = new node(6);
	//t.root->left->left = new node(2);
	t.root->left->right = new node(6);
	//t.root->left->right = new node(6);
	t.root->right->left = new node(6);
	//t.root->right->left = new node(6);
	t.root->right->right = new node(6);
	//t.root->left->left->left = new node(3);
	//t.root->right->right->right = new node(3);
	//t.preorder(t.root);
	//t.level_order(t.root);
	//NL;
	//t.postorder(t.root);
	//NL;
	//t.inorder(t.root);
	//NL;
	//print(t.height(t.root));
	//print(t.size(t.root));
	//t.findAverageLevel2(t.root);
	t.checkSumTree(t.root);
	isCheckSumTree ? cout<<("true") : cout<<("false");
	//for( auto x: t.mp){
		////int sum = accumulate(x.second.begin(),x.second.end(),0);
		////cout<<(sum)<<"\n";
	//}
	//for (int i = 0; i < t.mp.size(); i++)
	//{
		//int sum = accumulate(t.mp[i].begin(),t.mp[i].end(),0);
		//cout<<(sum)<<"\n";
		
	//}
	

	//t.checkSumTree(t.root) ? print("true") : print("false");
	
	
}

