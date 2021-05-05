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
	string s;
	cin >> s;
	stack<char> stack;
	bool flag = false;
	FOR(i,0,(int)s.length()){
		if(stack.empty()){
			stack.push(s[i]);
		}
		else if( s[i] == ')' ){
				if ( stack.top() == '(' ){
					flag = true;
					break;
				}else{
					while(stack.top() != '(') {
						stack.pop();
					}
					if(!stack.empty())
						stack.pop();
				}
			}
		else if (s[i] == '*' || s[i] == '-' || s[i] == '/' || s[i] == '+' || s[i] == '('){
				stack.push(s[i]);
			}
	}
	
	flag ? print(1) : print(0);
	NL;
}

