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
	int N, even = 0, odd = 0; 
	cin >> N;
	int a[N],earr[N],oarr[N];
	FOR(i,0,N){
		cin >> a[i];
		earr[i] = oarr[i] = a[i];
	}
	for (int i = 0; i < N; i+=2)
	{
		if ( i == 0 ){
			if(earr[i+1] >= earr[i]){
			even += (earr[i+1] - earr[i]) + 1;
			earr[i+1] -= (earr[i+1] - earr[i]) + 1;
			}
		}
		else{
			if ( earr[i+1] >= earr[i]){
				even += (earr[i+1] - earr[i]) + 1;
				earr[i+1] -= (earr[i+1] - earr[i]) + 1;

			}
			
			if ( earr[i-1] >= earr[i]){
				even += (earr[i-1] - earr[i]) + 1;
				earr[i-1] -= (earr[i-1] - earr[i]) + 1;


			}
		}
			
	}
	for (int i = 1; i < N; i+=2)
	{
		if ( i == N-1 ){
			if(oarr[i-1] >= oarr[i]){
				odd += (oarr[i+1] - oarr[i]) + 1;
				oarr[i-1] -= (oarr[i-1] - oarr[i]) - 1;
			}
		}
		else{
			if ( oarr[i+1] >= oarr[i]){
				odd += (oarr[i+1] - oarr[i]) + 1;
				oarr[i+1] -= (oarr[i+1] - oarr[i]) + 1;

			}
			
			if ( oarr[i-1] >= oarr[i]){
				odd += (oarr[i-1] - oarr[i]) + 1;
				oarr[i-1] -= (oarr[i-1] - oarr[i]) + 1;

			}
		}
				
	}
	//print("odd:")<<TAB;
	//FEI(el,oarr) 
		//print(el)<<TAB;
	//NL;
	//print("even:")<<TAB;
	//FEI(el,earr)
		//print(el)<<TAB;
	//NL;
	cout << min(even,odd);

	
}

