
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

ll m,n;
bool inRange(ll x ){
	if ( x >= 1 && x <= n)
		return true;
	else
		return false;
}
bool equal(ll x, ll y ){
	return (x == y);
}
int main()
{
	sync;
	cin >> n; cin >> m;
	bool have = false;
	ll a[m],a1[n+1]={0},b1[n+1]={0},b[m],count=0,count1=0;
	FOR(i,0,m){
		cin >> a[i]; cin >> b[i];
		//if ( i == 0 ){
			//continue;
		//}
		//else {
			////test("a[i]:",a[i])<<TAB; test("b[i]:",b[i])<<TAB;
			////test("a[i-1]:",a[i-1])<<TAB; test("b[i-1]:",b[i-1]); NL;
			//if(inRange(a[i-1]) && inRange(a[i]) && inRange(b[i]) && inRange(b[i-1])){
				//if(  (equal(a[i-1],a[i]) || equal(a[i-1],b[i]) || equal(a[i],b[i-1]) || equal(b[i],b[i-1]))){		
				//if(  (equal(a[0],a[i]) || equal(a[0],b[i]) || equal(a[i],b[0]) || equal(b[i],b[0]))){
					//count++;		
				//}else{
					//a1[a[i]]++; a1[b[i]]++;
				//}	
				
					
			//}
			if(equal(a[0],a[i]) || equal(a[0],b[i])){
				count++;
			}else{
				a1[a[i]]++; a1[b[i]]++;
			}
			
			if(equal(b[0],a[i]) || equal(b[0],b[i])){
				count1++;
			}else{
				b1[a[i]]++; b1[b[i]]++;
			}
			
		//}
	}
	//test("count",count)<<TAB;
	//FEI(el ,a1){
		//print(el)<<TAB;
	//}
	//NL;
	//FEI(el ,b1){
		//print(el)<<TAB;
	//}
	//NL;
	FOR(i,0,n){
		if(a1[i] == (m-count)){
			have = true;
			break;
		}
	}
	FOR(i,0,n){
		if(b1[i] == (m-count1)){
			have = true;
			break;
		}
	}
	(have) ? print("YES") : print("NO");
	
}
