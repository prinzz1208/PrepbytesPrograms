#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)

#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<endl


int main()
{
	sync;
	ll T,N,K; cin >> T;
	while ( T-- ) {
		cin >> N; cin >> K;
		ll a[N];
		ll sarr[N] = {0}, sum,i = 0,maxHop = 0 ;
		FOR(j,0,N){
			cin >> a[j];
			
		}
		FORD(j,N-1,0){
			if(a[j] >= 0)
				i = j;
		}
		FOR(j,i,N){
			sum = 0,maxHop = 0;
			for (int l = j; l< N; l+=K)
			{
				sum += a[l];
				if(sum > maxHop) maxHop = sum;
				if(sum < 0 ) break;
			}
			sarr[j] = maxHop;
		}
		//FEI(el, sarr) {
			//print(el)<<TAB;
		//}
		NL;
		ll max = *max_element(sarr,sarr+N);
		if(max >= 0 ) print(max);
		else print(0);
		NL;
	}
	
}

