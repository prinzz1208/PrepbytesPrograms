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


ll recur(int a[],int j,int n,ll sum) {
	if ( j >= n )
		return sum;
	else
		return recur(a,j+1,n,sum+a[j]) + recur(a,j+1,n,sum);
}
int main()
{
	sync;
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		FOR(i,0,n) cin >> a[i];
		ll sum = 0;
		print(recur(a,0,n,sum));
	}
	for(vi el: result){
		for( int el2: el ){
			print(el2)<<" ";
		}
		NL;
	}
	
}

