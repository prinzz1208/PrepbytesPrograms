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


void recur(	int n, int x,string s){
	if ( n == (int) s.length() ){
		print(s);
		NL;
	}
	else{
		if ( x == 1)
			recur( n, 0,s + to_string(0));
		else{
			recur( n, 0,s + to_string(0));
			recur( n, 1,s + to_string(1));
		}	
	}
	
}
int main()
{
	sync;
	
	int t,n; cin >> t;
	while(t--) {
		cin >> n;
		recur(n,0,"");
		NL;
	}
}

