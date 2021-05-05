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


void recur(string s , int q, int d) {
	if ( q == 1 ) {
		print(s);
		NL;
	}else {
		FOR(i,d,q+1) {
			//test("i:",i);
			if ( ( ( q % i ) == 0 )  ) {
				
				int temp = q / i;
				recur(s + " " + to_string(i),temp,i);
			}
			
		}
		//NL;
	}
}

int main()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		recur("1", n, 2);
	}
	
}




