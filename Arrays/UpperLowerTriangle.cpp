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
	int M = 3, N = 3 ;
	cin >> M;
	cin >> N;
	int a[M][N] ;
	//int a[3][3] = {1,2,3,4,5,6,7,8,9} ;
	FOR(i,0,M){
		FOR(j,0,N){
			cin >> a[i][j];
		}
	}
	

	FOR(i,0,M){
		FOR(j,0,N){
			if( i >= j )
				print(a[i][j])<<" ";
			else
				print(0)<<" ";
		}
		NL;
	}
	FOR(i,0,M){
		FOR(j,0,N){
			if( i <= j )
				print(a[i][j])<<" ";
			else
				print(0)<<" ";
		}
		NL;
	}
}

