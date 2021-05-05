#include <bits/stdc++.h>
using namespace std;

#define TAB '\t'
#define pb push_back
#define vi vector<int>
#define print(a) cout << a
#define ll long long int
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)

#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<"\n"


int main()
{
	sync;
	int n; cin >> n;
	int a[n];
	vi left,right;
	FOR(i,0,n) cin >> a[i];
	int min,max1;
	FOR(i,0,n){
		if( i == 0) {
			left.pb(i);
			min = a[i];
			max1 = *max_element(a,a+n);
			right.pb(max_element(a,a+n) - a);
			
		}else{
			if( a[i] <= min){
				left.pb(i);
				min = a[i];
			}
			if( a[i] == max1 && i + 1 < n){
				max1 = *max_element(a+i+1,a+n);
				right.pb(max_element(a+i+1,a+n) - a);
			}

		}
	}
	unsigned int n1 = left.size(),n2 = right.size();
	
	unsigned int i = 0,j = 0;
	
	max1 = -1;
	while( i < n1 && j < n2 ){
		if ( a[left[i]] >= a[right[j]])
			i++;
		else {
			max1 = max(right[j] - left[i],max1);
			j++;
		}
	}
	print(max1);
	NL;
	//print("left")<<TAB;
	//FEI(el,left){
		//print(el) << TAB;
	//}
	//NL;
	//print("right")<<TAB;
	//FEI(el,right){
		//print(el) << TAB;
	//}
	//NL;
	
	
}

