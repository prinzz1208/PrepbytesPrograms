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
void recurr(int a[], vi out, map<pair<int,int>,int> b, int n, int s, int sum){
	if((int)out.size() >= 4 || (int)out.size() >= n ){
		if( sum == s){
			sort(out.begin(),out.end());
			st.insert(out);
		}
		return;
	}
	FOR(i,0,n){
		if(a[i] + sum > s){
			return;
		}
		if(b.find({a[i], i}) == b.end()){
			vi out2 = out;
			map<pair<int,int>,int> b2 = b;
			out2.pb(a[i]);
			b2[{a[i], i}] = true;
			recurr(a,out2,b2,n,s, sum + a[i]);
		}
	}
}

int main()
{
	sync;
	int n,s;
	cin >> n;
	int a[n];
	FOR(i,0,n) cin >> a[i];
	sort(a,a+n);
	cin >> s;
	map<pair<int,int>,int> b;

	recurr(a,vi(),b,n,s,0);
	for(vi el: st){
		for( int el2: el ){
			print(el2)<<" ";
		}
		NL;
	}
	

}


