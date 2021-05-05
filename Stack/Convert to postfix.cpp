#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

int priority(char x ) {
	
	switch(x){
		case '^':
			return 5;
		case '/':
			return 4;
		case '*':
			return 3;
		case '-':
			return 2;
		case '+':
			return 1;
		default:
			return -1;
	}
}

int main()
{
	sync;
	int t; cin >> t;
	string str;
	while(t--) {
		cin >> str;
		stack<char> s;
		vector<char> v;

		s.push('(');
		FOR(i,0,(int)str.length()) {
			
			if ( str[i] == '*' || str[i] == '-' || str[i] == '/' || str[i] == '+' || str[i] == '^' ){
				if(s.top() != '(' ){
					
					while (priority(s.top()) >= priority(str[i])){
						v.pb(s.top());
						s.pop();
					}
				}
				s.push(str[i]);
			}
			
			else if(str[i] == ')'){
				while(s.top() != '('){
					v.pb(s.top());
					s.pop();
				}
				s.pop();
			}
			
			else if(str[i] == '(' ){
				s.push(str[i]);
			}
			
			else{
				v.pb(str[i]);
			}
		}
		while(!s.empty() && s.top() != '('){
			v.pb(s.top());
			s.pop();
		}
		for(char s2: v)
			print(s2);
		NL;
	}
	

}

