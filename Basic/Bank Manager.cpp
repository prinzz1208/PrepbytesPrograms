
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  //write your code here
	ll T,N; cin >> T;
	while ( T --) {
		cin >> N;
		ll i = 2,sum = 0;
		while ( N != 1){
			if ( N % i == 0 ){
				sum += i;
				N = N / i;
			}else{
				i++;
			}
			
		}
		cout << sum << endl;
	}
	return 0;

}
