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
	int T=1; 
	cin >> T;
	while(T--) {
		string s;
		string s2="aman";
		cin >> s;
		int n = (int)s.length();
		ll count=0;
		FOR(i,0,n){
			FOR(k,i,n){
				int j=0;

				if(s[k] == s2[j]){
					while( (s[k] == s2[j] )&& k < n){
						k++; j++;}	
					
					
					//test("k:",k);NL;
					if(j == 4){
						k--;
						count += n-(k);
						//test("count:",count)<<TAB; 
						break;
						
					}else{
						k -= j;
					}
				}
			}
		}
		//NL;
		print(count);
		NL;
		
	}
	
}

