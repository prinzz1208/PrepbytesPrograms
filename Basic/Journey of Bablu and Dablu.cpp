#include <bits/stdc++.h>
  using namespace std;
  #define ll long long int
  int main()
  {
    //write your code here
    ll T, N; cin >> T;
    while(T--){
      cin >> N;
      int temp = N % 8;
      if (temp == 0) temp = 8;
      switch(temp){
        case 1:

            cout << N + 3 <<"LB";
          break;
        case 2:
          cout << N + 3 <<"MB";
          break;
        case 3:
          cout << N + 3 <<"UB";
          break;
        case 4:
          cout << N - 3 <<"LB";
          break;
        case 5:
          cout << N - 3 <<"MB";
          break;
        case 6:
          cout << N - 3 <<"UB";
          break;
        case 7:
          cout << N + 1 <<"SU";
          break;
        case 8:
          cout << N - 1 <<"SL";
          break;
      }
      cout<<endl;
    }
    return 0;
  }
