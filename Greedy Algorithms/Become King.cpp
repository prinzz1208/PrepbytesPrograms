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
	int t; cin >> t;
	while(t--){
		int n,x;
		priority_queue<int,vector<int>,greater<int>> pq;

		cin >> n;
		FOR(i,0,n){
			cin >> x;
			pq.push(x);
		}
		int ans = 0;
		while(pq.size() > 1){
			int a = pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();
			ans += a+b;
			pq.push(a+b);
		}
		print(ans);
		NL;
	}

}

