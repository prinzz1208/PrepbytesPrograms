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

set<string> st;
void recurr(string s, int is){
	
	FORD(i,is,0){
		string s2 = s;
		s2[i] = tolower(s[i]);
		st.insert(s2);
		recurr(s2,i-1);
	}
	
}
int main()
{
	sync;
	string s;
	cin >> s;
	for (auto & c: s) c = toupper(c);
	recurr(s,int(s.length()-1));
	for(string x: st){
		print(x);
		NL;
	}
	
}



