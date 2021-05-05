#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

int main()
{
	sync;
	int n,k,x;
	cin >> n >> k;
	int a[100001] = {0},max = INT_MIN,min = INT_MAX,count = 0;
	FOR(i,0,n){
		cin >> x;
		if( x < min )
			min = x;
		if ( x > max )
			max = x;
		a[x]++;
	}
	while( max - min > k){
		//test("max:",max)<<TAB;
		//test("min:",min);
		//NL;
		a[min]--; a[max]--;
		if(a[max] <= 0){
			max--;
			a[max]++;
		}else{
			a[max-1]++;
		}
		if(a[min] <= 0){	
			min++;
			a[min]++; 
		}else{
			a[min+1]++;
		}
		count++;
	}
	//FOR(i,0,100){
		//if(a[i] != 0)
			//print(i)<<TAB;
	//}
	print(count);
}

