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
	string str;
	stack<char> s;
	int test_cases = 0;
	while ( true ){
		int count = 0;
		test_cases++;
		cin >> str;
		if ( str.find('-') != string::npos)
			break;
		else{
			FOR(i,0,(int)str.length()){ 
				if (s.empty())
					s.push(str[i]);
				else if ( str[i] == '{' ){
					s.push(str[i]);
				}else {
					if ( s.top() == '{' ) {
						s.pop();
					}else{
						s.push(str[i]);
					}
				}
			}
			while( !s.empty()){
				char top = s.top();
				s.pop();
				if ( !s.empty() ){
					if ( top == s.top() ){
						count++;
						s.pop();
					}else{
						count += 2;
						s.pop();
					}
				}
			}
			cout<<test_cases<<"."<< " " << count;
		NL;
		}
	}
}

