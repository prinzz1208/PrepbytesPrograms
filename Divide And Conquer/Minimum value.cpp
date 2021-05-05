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
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

bool contains(char c, string s, int size){
	
	int count = 0;
	FOR(i,0,size){
		if(s[i] == c )
			count++;
	}
	//NL;
	//test("char:",c)<<TAB;
	//test("size:",size)<<TAB;

	if(count){
		FOR(j,size,(int)s.length()){
			//print(s[j]);
			if(s[j-size] == c )
				count--;
			if(s[j] == c)
				count++;
			if ( count == 0)
				return false;
		}
		
	}else{
		return false;
	}
	
	return true;
}
int main()
{
	sync;
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		bool flag = true;
		int size = (int)s.length();
		while(flag){
			flag = false;
			FOR(i,'a','z'+1){
				if(contains((char)i,s,size)){
					//test("char:",(char)i)<<TAB;
					//test("size:",size)<<TAB;
					flag = true;
					size--;
					break;
				}else{
					//test("char:",(char)i)<<TAB;
					//test("size:",size)<<TAB;
				}
			}
			//NL;
		}
		//NL;
		print(size+1);
		NL;
	}
	
}

