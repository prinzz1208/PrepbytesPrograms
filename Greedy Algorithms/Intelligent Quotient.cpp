#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int 
#define vi vector<ll>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define NL cout<<"\n"



set<vi> st;
void recurr(int a[], int n, int index, vi out, int sum, int v){
	
	if( sum == v ){
		//sort(out.begin(),out.end());
		st.insert(out);
		return;
	}
	if ( sum > v)
		return;

	FOR(i,index,n){
		vi out2 = out;
		out2.pb(a[i]);
		int sum2 = sum;
		sum2 += a[i];
		if( sum2 <= v )
			recurr(a,n, i,out2,sum + a[i],v);
		
	}
	
}
int main()
{
	sync;
	int n,v;
	cin >> n >> v;
	int a[n];
	FOR(i,0,n) cin >> a[i];
	sort(a,a+n);
	recurr(a,n,0,vi(),0,v);
	for(vi temp: st){
		for(int t: temp)
			print(t)<<" ";
		NL;
	}
	
	

}

