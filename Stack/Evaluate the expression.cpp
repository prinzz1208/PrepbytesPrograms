
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
	cin >> n;
	stack<string> s;
	string x;
	int ans = 0;
	FOR(i,0,n){
		cin >> x;
		if ( s.empty()){
			s.push(x);
		}
		else if ( x == "*" || x == "-" || x == "/" || x == "+"){
			int b = stoi(s.top());
			s.pop();
			int a = stoi(s.top());
			s.pop();
			ans = 0;
			switch(x[0]){
				case '*':
					ans += a * b;
					break;
				case '-':
					ans += a - b;

					break;
				case '/':
					ans += a / b;

					break;
				case '+':
					ans += a + b;
					break;
			}
			s.push(to_string(ans));
		}
		else{
			s.push(x);
		}
	}
	print(s.top());
}
