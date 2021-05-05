#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

ll mp[101][101];
ll recurr2(int a[], int i, int j,bool chance){
	//test("i:",i)<<TAB;
	//test("j:",j);
	//NL;
	
	if( i >= j ){
		if(chance){
			mp[i][j] = a[i];
		}else{
			mp[i][j] = 0;
		}
	}else{
		if( mp[i][j] == -1){
			ll left = recurr2(a,i + 1,j,!chance);
			ll right = recurr2(a,i,j-1,!chance);
			
			if(chance){
				chance = false;
				left += a[i]; 
				right += a[j] ;		
				mp[i][j] = max(left,right);		
			}else{
				chance = true;
				
				//if(a[i] > a[j] ){
					//mp[i][j] = recurr2(a,i + 1,j,chance);
				//}
				//else{
					//mp[i][j] = recurr2(a,i,j-1,chance);
				//}
				mp[i][j] = min(left,right);	
			}
			
		}
		//else{
		
			//print("DP:")<<TAB;
		//}
	

	}
	//test("i:",i);
	//test(" j:",j)<<TAB;
	
	//print(mp[i][j])<<TAB;
	//NL;
	return mp[i][j];
}

int main()
{
	sync;
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n;
		//deque<int> a;
		
		int a[n];
		FOR(i,0,n) {
			cin >> x; 
			a[i] = x;
		}
		FOR(i,0,101){
			FOR(j,0,101)
				mp[i][j] = -1;
		}
		
		print(recurr2(a,0,n-1,true));
		NL;
	}

}


