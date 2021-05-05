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
	int T;
	cin >> T;
	while(T--) {
		string s,s2;
		bool turn = false;
		cin >> s;
		FOR(i,0,5){
			cin >> s2;
			if ( s2[0] == s[0] || s2[1] == s[1] ){
				turn = true;
				//break;
			}
		}
		turn ? print("YES") : print("NO");
	}
	
}

