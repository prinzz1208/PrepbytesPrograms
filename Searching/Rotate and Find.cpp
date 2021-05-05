#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define mk make_pair
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


ll findPivot(ll a[], ll lb, ll ub, ll n) {
	if ( lb >= ub ) {
		return -1;
	}
	ll mid = (lb + ub)/2;
	if ( (mid < (n-1)) && a[mid+1] < a[mid] )
		return mid + 1;
	else if ( (mid > 0) && a[mid-1] > a[mid] ) {
		return mid;
	}
	else {
		if ( a[mid] >= a[0] )
			return findPivot(a,mid+1,ub,n);
		else 
			return findPivot(a,lb,mid+1,n);

	}
	return -1;
	
}
ll bsearch(ll a[],ll lb, ll ub, ll key){
	if( lb >= ub)
		return -1;
	ll mid = (lb+ub)/2;
	if( a[lb] == key)
		return lb;
	else if( a[ub] == key)
		return ub;
	else if ( a[mid] == key )
		return mid;
	else if ( a[mid] > key )
		return bsearch(a,lb,mid-1,key);
	else
		return bsearch(a,mid+1,ub,key);
	
	return -1;
}
int main()
{
	sync;
	ll t,n,x; cin >> t;
	while (t--) {
		cin >> n;
		ll a[n];
		FOR(i,0,n) {
			cin >> a[i];
		}
		cin >> x;
		ll pivot = findPivot(a,0,n-1,n);
		if ( pivot != -1 ){
			if ( a[0] > x )
				print(bsearch(a,pivot,n-1,x));
			else
				print(bsearch(a,0,pivot-1,x));
		}
		NL;
	}
	
}
