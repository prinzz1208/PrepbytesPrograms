#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define TAB '\t'
#define pb push_back
#define vi vector<ll>
#define print(a) cout << a

#define FEI(el,s) for(ll el : s)
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= 0; index--)
#define NL cout<<endl
#define TEST(string) cout<<string

void swap (ll &a,ll &b){
	ll temp = a;
	a = b;
	b = temp;
}
void Reverse(ll a[],ll first,ll n)
{
	ll t = (n - first) / 2;
	FOR(i,0,t){
		swap(a[first + i],a[n-i-1]);
	}
	//FOR(i,first,n){
			//print(a[i]) << " ";
		//}
	//NL;
}

//RIGHT ROTATE
//void rotate(ll a[],ll n) {
	//ll temp = a[n-1];
	//FORD(i,n-1,0){
		//a[i] = a[i - 1];
	//}
	//a[0] = temp;
//}
int main()
{
	int T; cin >> T;
	ll n,k;
	while ( T-- )
	{
		cin >> n;
		cin >> k;
		ll a[n];
		FOR(i,0,n) {
			cin >> a[i];
		}
		if(k > 0 && n > 1){
			Reverse(a,0,n-k);
			Reverse(a,n-k,n);
			Reverse(a,0,n);
			//FOR(i,0,k) rotate(a,n);
	
		}
		FEI(el,a){
			print(el) << " ";
		}
		NL;
	}
}

