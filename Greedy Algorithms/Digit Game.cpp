#include <bits/stdc++.h>
using namespace std;

#define ll long long int
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
	int t;
	cin >> t;
	while(t--){
		string num;
		cin >> num;
		int m; cin >> m;
		int n = (int)num.length();
		int startM = m;
		while(m > 0 && startM - m < n ){
			for (int i = 0; i < n && m > 0; i++){
				if( num[i] < num[i+1]){
					num[i] = '*';
					m--;
					int k = i-1;
					while(k >= 0 && m > 0){
						if( num[k] != '*' ){
							if(num[k] < num[i+1]){
								num[k] = '*';
								m--;
							}
							else
								break;							
						}
						k--;
					}
				}
			}
			//print(num);
			//NL;
			for (int i = n-1; i >0 && m > 0 ; i--)
			{
				if(num[i] != '*'){
					int k = i-1;
					while(num[k] == '*'){ k--;}
											
					if(k >= 0 && num[i] <= num[k]){
						num[i] = '*';
						m--;
					}
				}
			}
			
		}
		FOR(i,0,n){
			if(num[i] != '*')
				print(num[i]);
		}
		NL;
	}

}

