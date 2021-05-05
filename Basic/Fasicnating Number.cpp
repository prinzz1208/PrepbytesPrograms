#include <bits/stdc++.h>
using namespace std;

bool fascinating(int n){
	while ( n != 0){
	  int toCheck = n % 10;
	  int temp = n / 10;

	  while (temp != 0){
		if ( temp % 10 == toCheck )
		  return false;
		temp = temp / 10;
	  }
	  n = n / 10;
	}
	return true;
}

int main()
{
	//write your code here
	int T,N; cin >> T;
	while( T-- ){
	  cin >> N;
	  N++;
	  while( !fascinating(N)){
		N++;
	  }
	  cout << N << "\n";
	}
	return 0;
}
