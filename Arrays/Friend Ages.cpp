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
#define FOR(index,a,n) for (ll index = a; index < n; index++)

#define FORD(index,a,n) for (ll index = a; index >= n; index--)

#define NL cout<<"\n"


int main()
{
	sync;
	ll n;
	cin >> n;
	ll a[n],count = 0;
	ll ages[121] = {0};
	unordered_map<int,int> hp;
	FOR(i,1,121){
		hp[i] = 0;
	}
	FOR(i,0,n){
		cin >> a[i];
		hp[a[i]]++;
		//ages[a[i]]++;
	}
	
	ll n2 = 120;
	
	FOR(i,1,121){
		if( hp[i] != 0)
			FOR(j,1,121) {
				
				if( hp[j] != 0){
					
					if ( !(j <= ((0.5*i) + 7) || ((j > 100) && (i < 100)) || j > i)){
						if( j == i){
							count += hp[i] * (hp[j] -1);
						}else
							
						count += hp[j] * hp[i];
					}
				}
			}
	}
	

	//FOR(i,0,n){
		//FOR(j,0,n2){
			//if( ages[j] != 0){
				////
				//if(j == a[i] )
					//count+= (ages[j] - 1);
				//else if ( !(j <= (0.5*a[i] + 7) || ((j > 100) && (a[i] < 100)) || j > a[i])) {
					////test("A:",j)<<TAB;
					////test("B:",a[i])<<TAB;
					////NL;
					//count+= ages[a[i]] * (ages[j]);
				//}
			//}
			
		//}
	//}
	//count==0 ? print(-1):print(count);
	print(count);
	NL;
}

