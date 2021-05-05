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

void recur(int n ,  int p, int last) {

	string temp = to_string(p);
	FORD(i,n-1,0){
		if(temp[i] == '0'){
			p += int(pow(10,n-1-i));
		}
	}
	if ( p == last ){
		print(last);
		return;
	}
	
	else{
		print(p);
		NL;
		recur(n,p+1,last);
	}
	

		
}

int main()
{
	sync;
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string p,last;
		FOR(i,0,n) {
			p += '1';
			last += '9';
		}
		recur(n,stoi(p),stoi(last));
		NL;
	}
	
}

