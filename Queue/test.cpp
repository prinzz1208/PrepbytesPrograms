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
	int n,t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		deque<int> dq;
		FOR(i,1,n+1)
			dq.pb(i);
		while(dq.size() != 1){
			dq.pb(dq.front());
			dq.pop_front();
			dq.pop_front();
		}
		print(dq.front());
		NL;
	}
	
	
}

