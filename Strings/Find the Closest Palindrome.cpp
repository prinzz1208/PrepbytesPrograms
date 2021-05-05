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

bool checkPalin(string s){
	int n = (int)s.length();
	int i = 0;
	int j = n-1;
	while(i < j ){
		if(s[i] != s[n-1-i])
			return false;
			
		i++; j--;
	}
	return true;
}
int main()
{
	sync;
	int t; cin >> t;
	while(t--) {
		string n;
		cin >> n;
		ll n = (int)n.length();
		if ( n<
		//ll i = n+1,j = n-1;
		//while( !checkPalin(to_string(i)) && !checkPalin(to_string(j))){
			////if( !checkPalin(to_string(i)))

			////if( !checkPalin(to_string(j)))
				////j--;
				//i++;
				//j--;
		//}
		//if(checkPalin(to_string(j)) && checkPalin(to_string(i)) )
			//if ( abs(i-n) > abs(n-j))
				//print(j);
			//else if ( abs(i-n) == abs(n-j))
				//print(j);
			//else 
				//print(i);
		
		//else if (checkPalin(to_string(j)))
			//print(j);
		//else 
			//print(i);
		////if ( diff1 < diff2 )
				////print(i);
		////else 
			////print(j);
		//NL;
		
	}
	
}

