
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
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'



int f(vi a,int n){
	if( a[n] != -1 ){
		return a[n];
	}
	int sum = 0;
	FOR(j,1,n+1){
		sum += f(a,j-1) * f(a,n-j);
	}
	
	a[n] = sum;			
	
	return a[n];

}
int main()
{
	sync;
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vi a;
		FOR(i,0,n+1){
			a.pb(-1);
		}
		a[0] = 1;
		a[1] = 1;
		a
		print(f(a,n));
		NL;
	}
}
  
