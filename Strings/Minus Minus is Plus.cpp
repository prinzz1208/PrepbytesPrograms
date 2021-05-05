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
	while(t--){
		string s,t;
		cin >> s;
		cin >> t;
		bool no_match = false;
		ll i = 0,j = 0,n1 = (int)s.length(),n2 = (int)t.length();
		while( i < n1 && j < n2 ){
			if( t[j] == '+'){
				if( s[i] == '-'){
					if(s[i+1] == '+'){
						no_match = true;
						break;
					}else i++;
				}
			}
			else {
				if( s[i] != '-'){
					no_match = true;
					break;		
				}
			}
			i++;
			j++;
		}
		if( i != n1 || j != n2 ){
			print("NO");
		}else if (  no_match ){
			print("NO");		
		}else print("YES");
			NL;
	}
	
}

