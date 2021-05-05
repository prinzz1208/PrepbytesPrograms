#include <bits/stdc++.h>
using namespace std;

#define print(a) cout << a
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a
#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (int index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'


int main()
{
	sync;
	int t,n; cin >> t;
	
	while (t--) {
		cin >> n;
		int arr[n];
		FOR(i,0,n) cin >> arr[i];
		sort(arr,arr+n);
		int a,b,c,a1,b1,c1;
		int k = 0,max = INT_MIN;
		
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
				
				if ( arr[j] + arr[l] > a1 )
					l--;
				else if ( arr[j] + arr[l] < a1 )
					j++;
				else{
					a = arr[j];
					b = arr[l];
					c = a1;
					k++;
					found = true;
					break;
				}
			}
			if(found)
				break;
			
		}

		if ( k > 0 ){
			//k--;
			print(c)<<TAB;
			print(a)<<TAB;
			print(b)<<TAB;
		}
		else 
			print(-1);
		NL;
	}
	
}

