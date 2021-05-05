#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define print(a) cout << a
#define vi vector<ll>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a 

#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

ll mp[101][101];
ll recurr(int a[], int i, int m,int n,bool chance){
	if( i >= n){
		return 0;
	}
	
	int sum = 0;
	ll max1 = INT_MIN,min1 = INT_MAX;
	if(mp[i][m] == -1){
		for (int j = i,x = 1; x <= 2*m && j < n ; j++,x++)
		{
			
			if(chance){
				sum += a[j];
				ll temp = sum + recurr(a,j+1,x,n,!chance);
				if(temp > max1 )
					max1 = temp;
			}else{
				ll temp = recurr(a,j+1,x,n,!chance);
				if(temp < min1)
					min1 = temp;
			}
			
			
		}
		if(chance)
			mp[i][m] = max1;
		else
			mp[i][m] = min1;
	}
	return mp[i][m];
	
}

int main()
{
	sync;
	int n,x; cin >> n;
			
	int a[n];
	FOR(i,0,n) {
		cin >> x; 
		a[i] = x;
	}
	FOR(i,0,101){
		FOR(j,0,101)
			mp[i][j] = -1;
	}
		
	print(recurr(a,0,1,n,true));
	NL;

}



