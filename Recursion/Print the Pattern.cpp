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

void recur(int n){
	print(n)<<TAB;
	if ( n > 0 ){
		recur(n-5);
		print(n)<<TAB;
	}
}
int main()
{
	sync;
	int t,n = 0;
	cin >> t;
	while(t--) {
		cin >> n;
		recur(n);
		NL;
	}
	
}

