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


int main()
{
	sync;
	ll t,n; cin >> t;
	while(t--) {
		cin >> n;
		ll a[n],left[n],right[n],leftMax = INT_MIN,rightMax = INT_MIN;
		FOR(i,0,n){
			cin >> a[i];
			if ( leftMax < a[i] )
				leftMax = a[i];
			left[i] = leftMax;
		}
		FORD(i,n-1,0) {
			if ( a[i] > rightMax)
				rightMax = a[i];
			right[i] = rightMax;
		}
		FOR(i,0,n){
			if( i == 0 ){
				if ( right[i] == a[i] ){
					print(i)<<TAB;
					break;
				}
			}
			else if ( i == n-1 ){
				if ( left[i] == a[i] ){
					print(i)<<TAB;
					break;
				}
			}else {
				if ( left[i] == a[i] && right[i] == a[i] ) {
					print(i)<<TAB;
					break;
				}
			}
		}
	}
	
}

