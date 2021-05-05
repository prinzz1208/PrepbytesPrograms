
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  //write your code here
  ll T,N; cin >> T;
  while ( T-- ){
    cin >> N; 
   ll tot = 0,digits = 0, temp = N;
	while ( temp != 0){
		digits++;
		 temp = temp / 10;
    }
    for (int i = 1; i <=digits && N > 0; i++)
	{
		ll tenPow = pow(10,i) - pow(10,i-1) ;
		if ( (N - tenPow) >= 0 ) tot += tenPow * i;
		else
			tot += N * i;
		N = N - tenPow;
	}
	
    cout << tot << "\n";
  }
  return 0;
}
