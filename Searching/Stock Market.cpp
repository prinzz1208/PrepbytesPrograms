	#include <bits/stdc++.h>
	using namespace std;

	#define pb push_back
	#define mk make_pair
	#define fop first
	#define sop second
	#define vi vector<int>
	#define vs vector<string>
	#define print(a) cout << a
	#define ll long long int
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
		ll t,n;
		cin >> t;
		while(t--) {
			cin >> n;
			ll a[n];
			ll prof = 0;
			FOR(i,0,n) cin >> a[i];
			FOR(i,1,n){
				if ( a[i] > a[i-1] )
					prof+=(a[i] - a[i-1]);	
			}
			
			print(prof);
		
			NL;
		}
		
	}

