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

set<vi> st;

void recurr(int a[], vi out, array<bool,10> b, int n){
	if((int)out.size() == n ){
		//sort(out.begin(),out.end());
		st.insert(out);
		
		return;
	}
	FOR(i,0,n){
		if(!b[i]){
			vi out2 = out;
			array<bool,10> b2 = b;
			out2.pb(a[i]);
			b2[i] = true;
			recurr(a,out2,b2,n);
		}
	}
}

int main()
{
	sync;
	int n;
	cin >> n;
	int a[n];
	FOR(i,0,n) cin >> a[i];
	sort(a,a+n);
	array<bool,10> b;
	FOR(i,0,10)
		b[i] = false;
	recurr(a,vi(),b,n);
	for(vi out: st){
		FEI(el, out){
			print(el)<<" ";
		}
		NL;
	}

}

