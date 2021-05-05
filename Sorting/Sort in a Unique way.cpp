#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'


int recur(int a[], int lb, int ub) {
	
	if(lb < ub){
		//print("array:");
		//FOR(i,lb,ub+1)
			//print(a[i])<<TAB;
		//NL;
		bool sorted = true;
		FOR(i,lb,ub){
			if ( a[i] > a[i+1] ){
				sorted = false;
				break;
			}	
		}
		if (sorted){
			return (ub - lb) + 1;
		}else{
			int mid = (lb + ub) / 2;
			return max(recur(a,lb,mid), recur(a,mid+1,ub));
		}
	}
	return 1;
}

int main()
{
	sync;
	int t,n; cin >> t;
	while ( t-- ) {
		cin >> n;
		int a[n];
		FOR(i,0,n) cin >> a[i];
		
		print(recur(a,0,n-1));
		NL;
	}
	
	
}

