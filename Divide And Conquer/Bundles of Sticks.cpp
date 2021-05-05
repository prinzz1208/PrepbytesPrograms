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

ll bundle(vi a,ll k){
	ll lb = 0,ub = 1e9;

	while(lb < ub){
		ll count = 0;
		ll mid = (lb+ub+1)/2;
		//test("mid:",mid);
		//NL;
		FEI(el,a){
			count += el/mid;
		}
		if( count >= k ){
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
	ll n,k,x;
	vi a;
	cin >> n >> k;
	FOR(i,0,n){
		cin >> x; 
		a.pb(x);
	}
	print(bundle(a,k));
	

}

