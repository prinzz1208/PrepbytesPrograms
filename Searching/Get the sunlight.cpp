#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define mk make_pair
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
	int t; cin >> t;
	int n;
	while(t--) {
		cin >> n;
		ll max = INT_MIN,count = 0,x;
		while(n--) {
			cin >> x;
			if( x > max ) {
				count++;
				max = x;
			}
		}
		print(count);
		NL;
		
	}
	
}

