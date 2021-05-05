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
	int T; cin >>T;
	ll n;
	while(T--){
		cin >> n;
		string x;
		ll a[101]={0},c[101]={0},na=0,nb=0,nc=0;
		ll carry = 0,sum = 0;
		FOR(i,0,n){
			cin >> x;
			ll n = (int)x.length();
	
			if(i==0){
				ll j=0;
				FORD(i,n-1,0){
					a[j++] = x[i] - '0';
					na++;
				}
				nc = na;
			}
			else{
				nb=0;
				ll j=0;
				ll b[101]={0};
				FOR(i,0,101) c[i] = 0;
				FORD(i,n-1,0){
					b[j++] = x[i] - '0';
					nb++;
				}
				
				ll n2 = na > nb ? na : nb ;
				ll i = 0;
				for (; i < n2; i++)
				{
					sum = a[i] + b[i] + carry;
					carry = sum / 10;
					c[i] = sum % 10;
				}
			

				if (carry != 0){
					c[i++] = carry;
					carry = 0;
				}
				na = i;
				nc = i;
			
				FOR(i,0,nc){
					a[i] = c[i];
				
				}
			}
		}
		FORD(i,nc-1,0) print(c[i]);
		NL;
	}

}

