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


void swap (char &a,char &b){
	ll temp = a;
	a = b;
	b = temp;
}
void Reverse(string &a,ll first,ll n)
{
	ll t = (n - first) / 2;
	FOR(i,0,t){
		swap(a[first + i],a[n-i-1]);
	}
	//FOR(i,first,n){
			//print(a[i]) << " ";
		//}
	//NL;
}


int main()
{
	sync;
	string s;
	cin >> s;
	int m,l,r,k; cin >> m;
	while(m--){
		cin >> l >> r >> k;
		k = k % (r-l);
		Reverse(s,l-1,r-k);
		Reverse(s,r-k,r);
		Reverse(s,l-1,r);
	}
	cout << s;
	NL;
	
}

