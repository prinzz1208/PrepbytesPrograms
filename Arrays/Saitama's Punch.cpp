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
	ll T, n, k, sum = 0; cin >> T;
	while(T--){
		cin >> n; cin >> k;
		ll a[n];
		sum = 0;
		FOR(i,0,n){
			cin >> a[i];
			if( i == 0 )
				sum += k;
			else{
				if( (a[i-1] + k) > a[i] )
					sum += (a[i] + k) - (a[i-1] + k) ;
				else{
					sum += k;
				}
			}
		}
		cout << sum << endl;
	}
	
	
}

