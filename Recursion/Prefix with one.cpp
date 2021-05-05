
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


void recur( string s, int n)
{
	if( (int)s.length() == n){
		bool p = true;
		FOR(i,1,n+1){
			int c0 = 0, c1 = 0;

			string s2 = s.substr(0,i);
			FOR(j,0,(int)s2.length()){
				if(s2[j] == '0') c0++;
				else c1++;
			}
			if(  c1 < c0 ){
				p = false;
				break;
			}
		}
		if(p) print(s)<<TAB;
	}else{
		recur(s+'1',n);
		recur(s+'0',n);
	}
}

int main()
{
	sync;
	int t,n; cin >> t; 
	while( t-- ) {
		cin >> n;
		recur("",n);
		NL;
	}
}


