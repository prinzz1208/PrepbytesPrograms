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
	ll n, k;
	cin >> n;
	cin >> k;
	ll a[n],diff[n] = {0};

	FOR(i,0,n) cin >> a[i];

	sort(a,a+n);

	FOR(i,n/2,n-1) diff[i] =  a[i+1] - a[i] ;
	//FEI(el,diff)
		//print(el)<<TAB;
	//NL;
	FOR(i,0,n/2) {
		if( k >= (i+1) * diff[(n/2)+i] ) {
			k -= (i+1) * diff[(n/2)+i];
			a[n/2] += diff[(n/2)+i];
			//test("a[n/2]:",a[n/2]);
			//NL;
		} 
	}
	if ( k > 0 ){
		a[n/2]+= ((n/2) + 1) / k;
	}
	print(a[n/2]);
}

