
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
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k,count = 0; cin >> k;
		int n = (int) s.length();
		bool marked[n] = {0};
		FOR(i,0,n)
			marked[i] = false;
		FOR(i,0,n){
			if(s[i] == '1'){
				bool flag = false;
				int j = 0;
				( i - k < 0 ) ?	j = 0 : j = i - k;
				
				
				for ( ; j <= i; j++)
				{
					if( s[j] == '0' && !marked[j] ){
						count++;
						marked[j] = true;	
						//test("player:",i)<<TAB;
						//test("player 2:",j);
						//NL;
						flag = true;
						break;				
					}
				}
			
				if(!flag){
					for (int j = i; j <= i+k && j < n ; j++)
					{
						if( s[j] == '0' && !marked[j] ){
							count++;
							marked[j] = true;
							//test("player:",i)<<TAB;
							//test("player 2:",j);
							//NL;
							break;
						}	
					}					
				}
			}
			
		}
		print(count);
		NL;
	}

}
