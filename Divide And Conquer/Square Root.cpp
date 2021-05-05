#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define NL cout<<"\n"
#define TAB '\t'
#define sq(x) x*x
int main()
{
	sync;
  //write your code here
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll lb = 0,ub = n,mid = 0;
		ll ans=0;
		if ( n == 1){
			print(0);
		}
		else{
			while ( lb <= ub){
				mid = (lb + ub)/2;
				if (sq(mid) == n){
					ans = mid;
					break;
				}
				else if (sq(mid) < n){
					ans = mid;
					lb = mid + 1;
				}
				else {
					ub = mid - 1; 
				}
			}
			print(ans);
		}
		NL;

	}
	return 0;
}

