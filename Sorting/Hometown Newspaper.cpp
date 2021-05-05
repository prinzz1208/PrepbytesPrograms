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

struct nwp {
	string c;
	int p;
	int d;	
};

bool compare1( nwp a, nwp b ) {
	return a.d > b.d;
}
bool compare2( nwp a, nwp b ) {
	return a.p > b.p;
}
int main()
{
	sync;
	int t,n; cin >> t;
	while(t--) {
		cin >> n;
		nwp a[n];
		FOR(i,0,n) {
			cin >> a[i].c;
			cin >> a[i].p;
			cin >> a[i].d;
		}
		sort( a, a+n, compare2);
		sort( a, a+n, compare1);
		
		FOR(i,0,n)
			print(a[i].c)<<"\n";
		
		
	}
	
}

