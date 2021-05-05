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
	int T,N;
	cin >> T;
	while (T--) {
		cin >> N;
		string s;
		int a[27]={0};
		FOR(i,1,N+1){
			cin >> s;
			int n = (int)s.length();
			int a2[27]={0};

			FOR(j,0,n){
				a2[s[j]-'a']++;
			}
			FOR(l,0,27){
				if(a2[l] >= 1 )	a[l]++;
			}
		}
		int count = 0;
		FOR(i,0,27){
			if(a[i] == N )count++;
		}
		//FEI(el,a) print(el)<<TAB;
		NL;
		print(count); NL;
	}
	
}
