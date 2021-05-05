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
	int n,s,g,np,sp,cn = 0, cs = 0;
	cin >> n >> s >> g >> np >> sp;
	while(g--){
		//test("n:",n)<<TAB;
		//test("s:",s)<<TAB;
		if( n < s ){
			n += np;
			cn++;
		}else if ( s < n ){
			s += sp;
			cs++;
		}else{
			if(np >= sp ){
				n += np;
				cn++;
			}else{
				s += sp;
				cs++;			
			}
		}	
		NL;
	}
	if(n == s)
		print(cn);
	else
		print(-1);

}

