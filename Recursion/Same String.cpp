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

void recur(string s ,  int i, int j) {
	if( i >= j )
		print("Yes");
	else{
		if( s[i] == s[j] ) 
			recur(s,i+1,j-1);			
		else
			print("No");
	}		
}

int main()
{
	sync;
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		recur(s,0,(int)s.length()-1);
		NL;
	}
	
}


