
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
	ll N,red=0,black=0,x;
	cin >> N;
	FOR(i,0,N){
		cin >> x;
		ll temp = x - red + black;
		if ( temp == 0)
			continue;
		else if ( temp > 0 ){
			red += temp;
		}else{
			black += abs(temp);
		}
	}
	cout << black + red;
}
