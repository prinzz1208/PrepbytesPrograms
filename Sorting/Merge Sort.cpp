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


void  merge(int a[],int lb,int mid,int ub) {
	int n1,n2;
	n1 = mid - lb + 1;
	n2 = ub - mid;
	int left[n1],right[n2];
	FOR(i,0,n1)
		left[i] = a[lb+i];
	FOR(i,0,n2)
		right[i] = a[mid+i+1];
	
	int i = 0, j = 0, k = lb;
	while ( i < n1 && j < n2 ) {
		if ( left[i] <= right[j]) {
			a[k++] = left[i++];
		}
		else {
			a[k++] = right[j++];
		}
	}
	while ( i < n1 )
		a[k++] = left[i++];
	
	while ( j < n2 ) 
		a[k++] = right[j++];		
}
void mergesort(int a[],int first , int last){
	if ( first < last ){
		int mid = first +	(last - first)/ 2;
		mergesort(a,first,mid);
		mergesort(a,mid+1,last);
		merge(a,first,mid,last);
	}
}
int main()
{
	sync;
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		FOR(i,0,n)
			cin >> a[i];
			
		mergesort(a,0,n-1);
		FEI(el,a)
			print(el)<<TAB;
		}	
}

