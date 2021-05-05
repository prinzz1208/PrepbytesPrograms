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

#define NL cout<<"\n"

void swap(ll &a,ll &b)
{
	ll temp = a;
	a = b;
	b = temp;
}

int main()
{
	sync;
	ll T,m; cin >> T;
	while ( T-- ) {
		cin >> m;
		int a[10]={0};
		ll k = 0;
		while(m != 0){
			
			a[k++] = m % 10;
			m = m / 10;
		}
		if(k > 1){
			reverse(a,a+k);
			
			//FOR(i,0,k) print(a[i]);
			//NL;
			ll j = -1;
			FORD(i,k - 1,0){
				if( a[i-1] < a[i]){
					j = i-1;
					break;
				}
			}
			ll i = 0;
			
			if(j != -1){
				i = j + 1;
				int min = i;
				if( i != k -1 ){
					for (;  i < k ; i++){
						if(a[i] - a[j] == 1){
							min = i;
							break;
						}else if ( a[j] < a[i] && a[i] < a[min]){
							min = i;
						}
					}
				}
				
				swap(a[j],a[min]);
				sort(a + j + 1,a+k);
			}

		}
		FOR(i,0,k) print(a[i]);

		NL;
	
		
	}
	
}

