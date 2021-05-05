
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T,M,N; cin >> T;
    while(T--){
      //int temp1 = 0, temp2 = 0;
      cin >> M; cin >> N;
      //if( M % 2 == 0)
		//temp1 = ((M / 2) * N);
	  //else if ( N % 2 == 0)
		//temp2 = ((N / 2) * M);
		
      cout << max(M/2 * N, N/2 * M);
      //cout << max(temp1, temp2);
		
      cout << endl;

    }
    return 0;
  }
