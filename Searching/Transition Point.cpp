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

ll bsearch(ll a[],ll lb,ll ub){
	if( lb >= ub)
		return -1;
	  

	ll mid = (lb + ub) / 2;
	//test("mid:",mid); NL;


	if( a[lb] == 1 && lb == 0){
		return lb;
	}
	
	if( a[ub] == 1 && ub > 0 && a[ub - 1] == 0 ) {
		return ub;
	}
	
	if( a[mid] == 0 ){
		return bsearch(a,mid+1,ub);
	}else {
		if( mid > 0 && a[mid - 1] == 0)
			return mid;
		else
			return bsearch(a,lb,mid - 1);
	}
	
	return -1;
	  
}
int main()
{
  //write your code here
	sync;
	ll t, n;
	cin >> t;
	while( t-- ) {
		cin >> n;
		ll a[n];
		FOR(i,0,n) cin >> a[i];
		if( n == 1 ) {
			if (a[0] == 1) print(0);
			else print(-1);
		}
		else
			print(bsearch(a,0,n-1));
		NL;
	}
	return 0;
}
