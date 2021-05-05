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

int main()
{
	sync;
	int n;
	string s;
	cin >> s;
	n = (int)s.length();
	stack<char> s1;
	FOR(i,0,n){
		switch(s[i]){
			case '/':
				break;
			case '.': 
				
				if(i != 0 && s[i-1] == '.'){
					if(!s1.empty())
						s1.pop();
				}
				break;
			default:
				s1.push(s[i]);
				break;
				
		
		} 
	}
	if ( s1.empty() )
		print('/');
	else{
		stack<char> s2;
		while(!s1.empty()){
			//test("/",s1.top());
			//s1.pop();
			s2.push(s1.top());
			s1.pop();
		}
		while(!s2.empty()){
			test("/",s2.top());
			s2.pop();
		}
	}
	
}

