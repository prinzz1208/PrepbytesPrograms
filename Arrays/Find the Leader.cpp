#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = n-1; index >= a; index--)

#define NL cout<<endl
#define TEST(string) cout<<string

int main()
{
	int T; cin >> T;
	ll N;
	while ( T-- ) {
		cin >> N;
		ll ar[N],max = INT_MIN;
		FOR(i,0,N) cin >> ar[i];
		FORD(i,0,N) {
			if ( max <= ar[i] ){
				max = ar[i];
				cout << ar[i] << " ";
			}
		}
		cout << endl;
	}
	
}

