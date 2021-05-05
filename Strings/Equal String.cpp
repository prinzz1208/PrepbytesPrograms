#include <bits/stdc++.h>
using namespace std;
#define TAB '\t'
#define pb push_back
#define vi vector<int>
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
	while(t--) {
		int N;
		cin >> N;
		string a[N];
		FOR(i,0,N){
			cin >> a[i];
		}
		string toMatch = a[0];
		int ans = INT_MAX;
		bool flag = true;
		FOR(i,0,N) {
			int count = 0;
			FOR(j,0,N){
				if( i != j){
					string temp1 = a[j] + a[j];
					if ( temp1.find(a[i]) == -1 ){
						flag = false;
						break;
					}else 
						count += temp1.find(a[i]);
				}
			}
			ans = min(ans,count);
			if(!flag)
				break;
		}
		flag ? print(ans) : print(-1);
		//ans != -1 ? print(count) : print(-1);
		NL;
		
	}
	
}

