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
	int t,n; cin >> t;
	while (t--)
	{
		int stack = 0;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0,flag = true;
		FOR(i,0,n){
			if ( s[i] == '<' )
				stack++;
			else
				stack--;

			if (stack < 0 ){
				break;
			}
			if (stack == 0){
				ans = i+1;
			}
			
		}
		if ( stack > 0 )
			flag = false;
			
		if (flag)			
				print(ans);

		//else
			//print(ans);
		NL;
		
	}
	
}
