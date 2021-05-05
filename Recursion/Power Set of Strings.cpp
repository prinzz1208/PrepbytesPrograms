
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

string s2;
void recur(string s,int j,int n) {
	if ( j >= n ){
		return;
	}
	else{
		print(s+s2[j]);
		NL;
		recur(s+s2[j],j+1,n);
		//print(s);
		//NL;
		recur(s,j+1,n);
	}
}

int main()
{
	
	
	cin >> s2;
	sort(s2.begin(),s2.end());
	recur("",0,(int)s2.length());
}



