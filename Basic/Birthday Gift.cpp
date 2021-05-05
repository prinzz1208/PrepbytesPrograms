#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
	//write your code here
	ll T; cin>>T;
	
	while(T--){
		ll a = 0, d = 0 , test = 0;
		cin >> a; cin >> test; cin >> d;
		if ( d == 0 ){
			if ( a == test)
				cout << "YES";
			else
				cout << "NO";
		}
		else if(test == a)
				cout<<"YES";
		else{
			if( ((test - a)%d == 0) && ((test - a)/d > 0) ){
				cout << "YES";
			}
			else
				cout << "NO";
		}
		cout << "\n";
	
	}
	
	return 0;
}
