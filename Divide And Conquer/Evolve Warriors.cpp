#include <bits/stdc++.h>
using namespace std;

#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

ll evolve(ll size,ll have,ll x,ll y){
	ll lb = 0,ub = size;
	ll mid = 0;
	while(lb < ub){
		mid = (lb+ub+1)/2;
		//test("mid:",mid);
		//NL;

		ll tot = mid * x;
		ll redeem = (size - mid) * y;
		if( have+redeem >= tot ){
			//test("pushed:",a[mid]);
			//NL;
			lb = mid;
		}else{
			ub = mid-1; 
		}
	}
	//return 0;
	return lb;
}
int main()
{
	sync;
	ll n,m,x,y;
	cin >> n >> m >> x >> y;
	//ll a[n+1];
	//FOR(i,1,n+1)
		//a[i] = i;
	print(evolve(n,m,x,y));
	

}

