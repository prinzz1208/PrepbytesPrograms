#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)

#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<"\n"



int main()
{
	sync;
	int T; cin >> T;
	while(T--){
		string s;
		string s1;
		cin >> s; cin >> s1;
		bool canBeDone = false;
		int n = (int)s.length();
		FOR(i,0,n){
			if(s[0] == s1[i]){
				if(i == 2 || (n - i) == 2){
					canBeDone = true;
					break;
				}
			}
		}
		(canBeDone) ? print("Yes") : print("No");
		NL;
	}
}
