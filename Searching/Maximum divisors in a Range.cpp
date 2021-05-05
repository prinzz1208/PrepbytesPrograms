#include <bits/stdc++.h>
using namespace std;

#define vi vector<ll>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


ll min(ll a, ll b){
	if( a < b)
		return a;
	else
		return b;
}
bool div(ll a,ll b, ll mid){
	return (a % mid == 0 && b % mid == 0);
}
int bsearch(vi a,ll lb,ll ub,ll low, ll high,ll n){
	if ( lb >= ub )
		return -1;
	
	ll mid = (lb + ub) / 2;
	
	if ( a[ub] >= low && a[ub] <= high ) {
		return a[ub];
	}
	
	else if( a[mid] >= low && a[mid] <= high){
		
		if ( mid < n-1 && a[mid+1]>= low && a[mid+1] <= high)
			return bsearch(a,mid+1,ub,low,high,n);
		else
			return a[mid];
	}
	else if( a[mid] < low )
		return bsearch(a,mid+1,ub,low,high, n);
		
	else if( a[mid] > high)
		return bsearch(a,low,mid-1,low,high, n);
		
	
	return -1;
}
int main()
{
	sync;
	ll a,b,q1,q2;
	cin >> a >> b;

	vi arr,v1;
	
	ll q;
	ll g = __gcd(a,b);


	for (ll i = 1; i <= g; i++)
	{
		if ( g % i == 0 )
			arr.push_back(i);
	}
	

	cin >> q;
	
	while(q--){
		cin >> q1 >> q2;
	
		ll id1 = lower_bound(arr.begin(), arr.end(), q1) - arr.begin();
        ll id2 = upper_bound(arr.begin(), arr.end(), q2) - arr.begin();
        ll diff = id2 - id1;
        if(diff == 0)
            v1.push_back(-1);
        else
            v1.push_back(arr[id2-1]);
		//if( n > 1 )
			//print(bsearch(arr,0,n-1,q1,min(ma,q2),n));
		//else if ( n == 1 && q2 >= arr[0] && arr[0] >= q1 ){
			//print(arr[0]);
		//}else{
			//print(-1);
		//}
		//cout << "\n";
	}
	for(ll el : v1){
		print(el)<<"\n";
	}
}
