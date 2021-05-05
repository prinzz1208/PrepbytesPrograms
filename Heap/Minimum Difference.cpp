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
	int t,n,p,q; cin >> t;
	while (t--)
	{
		cin >> n >> p >> q;
		priority_queue<int,vector<int>, greater<int> > pq;
		int x;
		FOR(i,0,n){
			cin >> x;
			pq.push(x);
		}
		int r = 0;
		while(!pq.empty() && (pq.top() <= p) ){
			r = pq.top();
			pq.pop();
		}
		vi vect;
		if(r != 0){
			vect.pb(r);
			q--;
		}
		while(!pq.empty() && q--){
			if (p != pq.top()){
				vect.pb(pq.top());				
			}
			pq.pop();
		}
		sort(vect.begin(),vect.end(),greater<int>());
		FEI(el,vect)
			print(el)<<TAB;
		NL;
	}
	
}
