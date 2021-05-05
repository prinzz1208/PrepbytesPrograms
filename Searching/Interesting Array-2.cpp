#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define vi vector<int>
#define vs vector<string>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)

#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<"\n"


int main()
{
	sync;
	ll n, k, count = 0,x;
	cin >> n >> k;
	vi a;
	unordered_map<int,int> hm;
	FOR(i,0,n) {

		cin >> x;
		if (hm.find(x) == hm.end()) {
				hm[x] = 1;
			}else{
				hm[x]++;
		}
	
	}
	for( auto p: hm ) {
		a.pb(p.fop);
	}
	sort(a.begin(),a.end());
	
	for(int i = 0, j = 1; j < (int)a.size() && i < (int)a.size() ; ){
		if( a[j] - a[i] == k ){
			count += hm[a[j]] * hm[a[i]];
			i++;
			j++;
		}
		else if ( a[j] - a[i] > k ){
			i++;
		}else{
			j++;
		}
	
	}

	print(count);
	
}

