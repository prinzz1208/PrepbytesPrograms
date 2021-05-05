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

int n;
string *a;
void recur(string s , int k, int j) {
	if ( k == 0 ){
		print(s);
		NL;		
	}
	else if ( j >= n) {
		return;
	}
	else{
		//test("j:",j)<<TAB;
		FOR(i,j,n) {
			recur(s + " " + a[i],k-1,i+1);
		}
	}
			
}

int main()
{
	sync;
	int k;
	cin >> n;
	a = new string[n];
	FOR(i,0,n) cin >> a[i];
	cin >> k;
	if( k == 0 ) print("");
	else
		FOR(i,0,n) {
			recur(a[i],k-1,i+1);
		}
	
}



