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

ll c=0;
void recur( string s, int n, int z,int j)
{
	//print(s); NL;
	int sum = 0;
	FOR(i,0,n){
		sum += s[i] - '0';
	}
	if ( sum == z ){
		c++; return;
	}else if ( sum > z )
		return;
	else{
		FOR(i,j,n){
			string s2 = s;
			s2[i]++;
			recur(s2,n,z,i);
		}
	}
}

int main()
{
	sync;
	int t,n,z; cin >> t; 
	while( t-- ) {
		cin >> n >> z;
		string s = "";
		FOR(i,0,n) s += '0';
		recur(s,n,z,0);
		print(c);
		c = 0;
		NL;
	}
}


