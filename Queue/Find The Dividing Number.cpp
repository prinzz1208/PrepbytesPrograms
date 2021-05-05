#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

int main()
{
	sync;
	int n,m;
	cin >> n >> m;
	int a[n];
	priority_queue<int> pq;
	FOR(i,0,n)
		cin >> a[i];
	FOR(i,0,n)
		pq.push(a[i]);
	
	int j = 0,q = 0;
	FOR(i,0,m){
		if(pq.empty())
			return 1;
		cin >> q;
	
		int x = pq.top();
		while(!pq.empty() && j<q){
			//test("x:",x)<<TAB;
			x = pq.top();
			pq.pop();
			if(x/2 > 0){
				pq.push(x/2);
			}
			j++;
		}

		print(x);
		NL;
		
	}
	
}

