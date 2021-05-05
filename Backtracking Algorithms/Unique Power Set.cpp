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


set<vi> result;
void powerSets(int a[], int c, int n, vi out){
	if(c >= n ){
		result.insert(out);
		return;
	}
	vi out2 = out;
	out2.pb(a[c]);
	powerSets(a,c+1,n,out2);
	powerSets(a,c+1,n,out);
}
int main()
{
	sync;
	int n;  cin >> n;
	int a[n];
	FOR(i,0,n) cin >> a[i];
	sort(a,a+n);
	powerSets(a,0,n,vi());
		for(vi el: result){
		for( int el2: el ){
			print(el2)<<" ";
		}
		NL;
	}
	
}

