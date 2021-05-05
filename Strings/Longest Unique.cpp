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
	while(t--) {
		string s; cin >> s;
		int n = (int) s.length();
		vi a1;
		int a[27];
		FOR(i,0,27) a[i] = -1;
		int i = 0,j = 0;
		while(j < n) {
			int temp = s[j] - 'a';
			if(a[temp] == -1)
				a[temp] = j;
			else if (a[temp] != -1 && a[temp] >= i ){
				a1.pb(j-i);
				//test("i:",i)<<TAB;
				//test("j:",j); NL;
				
				i = a[temp] + 1;
				a[temp] = j;
				//while(a[i]  == temp){ test("i:",i)<<TAB; i++;}
				
			}else{
				a[temp] = j;
			}
				//test("i:",i)<<TAB;
		//test("j:",j); NL;
			j++;
		}
	
		//a1[k++] = (j) - i;
		a1.pb(j-i);
		//FOR(i,0,k) print(a1[i])<<TAB;
		print(*max_element(a1.begin(),a1.end()));NL;
	}
	
}

