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
	int T; cin >> T;
	
	while(T--) {
		string s;
		bool mchar = false;
		int a[27]={0};
		cin >> s;
		FOR(i,0,(int)s.length()){
			a[int(s[i] - 'a')]++;
		}
		FOR(i,0,27){
			if(a[i] > 1){
				mchar = true;
				print((char)(i + 'a'))<<"="<<a[i]<<" ";
			}
		}
		if(!mchar){
			print(-1);
		}
		NL;
		
		
	}
	
	
}

