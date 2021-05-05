#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<endl
#define test(string,a) cout<<string<<a

int main()
{
	sync;
	ll T,N; cin >> T;
	while ( T-- ) {
		cin >> N;
		ll a[N];
		ll max = INT_MIN,max_i = 0, min_i = 0, min = 0, val = 0, temp;
		//ll max1 = INT_MIN, max2 = INT_MIN;
		FOR(i,0,N){
			cin >> a[i];
			//if( (a[i] + i) > max1 ) max1 = a[i] + i;
			//if( (a[i] - i) > max2 ) max2 = a[i] - i;
			
			if (i == 0) {
				min = a[0]; max = a[0];
				min_i = i; max_i = i;
			}
			else{
				
				if ( a[i] >= max ){
					max_i = i;
					max = a[i];
				  temp  = abs(min_i - max_i) + abs(min - max);
				}
				else if ( a[i] < min || i > min_i) {
					temp  = abs(i - max_i) + abs(a[i] - max);
					if( temp > val ){
						val = temp;
						min = a[i];
						min_i = i;
					}else
						temp = val;
				}
				if(val != temp)
					val = temp;
			

			}
				
		}
		print(val); NL;
		
	}
	
}

