
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define print(a) cout << a
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a
#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (int index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'


bool distinct( ll a, ll b ) {
	return ( a != b );
}
ll sq(ll a){
	return a*a;
}
int main()
{
	sync;
	int t,n; cin >> t;
	
	while (t--) {
		cin >> n;
		ll arr[n];
		FOR(i,0,n) cin >> arr[i];
		sort(arr,arr+n);
		ll k = 0,a1;
		
		//FEI(el,arr)
			//print(el)<<TAB;
		
		//NL;
		
		int l = n-1, j = 0;
		
		FORD(i,n-1,0){
			a1 = arr[i];
			l = n - 1;	
			j = 0;
			l = i - 1;
			bool found = false;
			while(j < l){
				//test("arr[j]:",sq(arr[j]))<<TAB;
				//test("arr[l]:",sq(arr[l]))<<TAB;
				//test("a1:]",sq(a1))<<TAB;
				//NL;
				if ( distinct(arr[j],arr[l]) ){
					if ( sq(arr[j]) + sq(arr[l]) > sq(a1) )
						l--;
					else if ( sq(arr[j]) + sq(arr[l]) < sq(a1) )
						j++;
					else{
						//print("found");
						//NL;
						k++;
						found = true;
						break;
					}
				}else{
					l--;
					j++;
				
				}
			}
			if(found)
				break;
			
		}

		if ( k > 0 ){
			//k--;
			print("YES");
		}
		else 
			print("NO");
		NL;
	}
	
}

