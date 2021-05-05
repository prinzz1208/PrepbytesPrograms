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

int main()
{
	sync;
	int n,x,y,t; cin >> n;
	vi a;
	int a2[n];
	FOR(i,0,n){
		cin >> t;
		a.pb(t);
		a2[i] = t;
	}
	int q; cin >> q;
	sort(a.begin(),a.end());
	sort(a2,a2 + n);
	a2[0] = a[0];
	FOR(i,1,n){
		a2[i] = a2[i-1]+a2[i];
	}
	//FEI(el,a){
		//print(el)<<TAB;
	//}
	//NL;
	while(q--){
		cin >> x >> y;
		auto low = lower_bound(a.begin(),a.end(),x);
		auto upp = lower_bound(a.begin(),a.end(),y);
		//test("low:",(low-a.begin()))<<TAB;
		//test("upp:",upp-a.begin())<<TAB;
		int sum1 = a2[(low-a.begin())-1];
		int sum2 = a2[n-1] - a2[upp-a.begin()];
		//test("sum1:",sum1)<<TAB;
		//test("sum2:",sum2)<<TAB;
		print(sum1+sum2);
		NL;
	}

}

