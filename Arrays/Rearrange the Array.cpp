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
	int T,N; cin >> T;
	while ( T-- ) {
		cin >> N;
		//int max=INT_MIN,ai=0,min=INT_MAX,ii=0,x;
		//int amax[N],amin[N];
		int a[N];
		FOR(i,0,N){
			cin >> a[i];
			//cin >> x;
			//if(x > max){
				//max = x;
				//amax[ai++] = x;
			//}
			//if(x < min){
				//min = x;
				//amin[ii++] = x;
			//}
		}
		int j = 0;
		FORD(i,N-1,N/2 ){
			if( i == j )
			cout<<a[i]<<" ";

			else
			cout<<a[i]<<" "<<a[j++]<<" ";
		}
	
		//while( ai >= 0 || ii >=0) {
			//TEST("ai:",ai)<<TAB;
			//TEST("ii:",ii)<<TAB;

			//if ( ai >= 0)
				//cout << amax[--ai] << " ";
			//if ( ii >= 0)
				//cout << amin[--ii] << " ";

		//}
		NL;;
	}
	
}

