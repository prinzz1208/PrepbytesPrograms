#include <bits/stdc++.h>
using namespace std;
#define FOR(index,a,n) for (int index = a; index < n; index++)
int main()
{
  //write your code here
  int T,N,S,p,q; cin >> T;
  while (T--){
    cin >> N; cin >> S; cin >> p; cin >> q;
    float min=0;
    int c1 = N * p;
    int c2 = (N / S) == 0 ? (N / S) + 1 * q : ( N / S )* q;
    int c3 = (N / S) * q + (N % S) * p;
    //cout << "c1:" << c1;
    //cout << endl;
    //cout << "c2:" << c2;
    //cout << endl;
    //cout << "c3:" << c3;
    //cout << endl;
    
    min = c1;
    if ( min  > c2) min = c2;
    if ( min > c3) min = c3; 
    cout << min << endl;
  }
  return 0;
}
