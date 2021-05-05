#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define vi vector<int>
#define vs vector<string>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'


void recur(string s, int zero,int one,int n){
	//test("zero:",zero)<<TAB;
	//test("one:",one)<<TAB;
	//NL;

	if ( (int)s.length() == 2*n){
		//print(s);
		//NL;
		if ( zero == one ){
			print(s)<<TAB;
		}
		//return;
	}
	else if ( zero >= one ){
		recur(s + '0',zero+1,one,n);
		recur(s + '1',zero,one+1,n);
	}
	
}
int main()
{
	sync;
	int n;
	cin >> n;
	recur("0",1,0,n);
	
	
}

