#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = n-1; index >= 0; index--)

#define NL cout<<endl
#define TEST(string) cout<<string

int main()
{
	int m,n;
	cin >> m; cin >> n;
	int a[m][n], b[m][n];
	FOR(i,0,m)
		FOR(j,0,n)
			cin >> a[i][j]; 
		
	
	FOR(i,0,m){
		FOR(j,0,n){
			cin >> b[i][j]; 
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << endl;
	}

	FOR(i,0,m){

		FOR(j,0,n){
			int sum = 0;
			FOR(k,0,n){
				sum += a[i][k] * b[k][j];
			}
			cout << sum << " ";
		}
			cout << endl;
	}
	
}
