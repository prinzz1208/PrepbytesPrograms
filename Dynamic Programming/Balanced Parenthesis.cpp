
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
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

int ans = 0;
void recurr(int size, int count, int n){
	//print(count)<<TAB; 
	
	if(count < 0)
		return;
	if(size >= n && size > 0){
		//test("count:",count);
		//NL;
		if(count == 0){
			ans++;
		}
		return;
	}
	recurr(size + 1, count + 1, n);
	if( count > 0 )
		recurr(size + 1, count - 1, n);
	
}

int main()
{
	sync;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		recurr(0,0,n);
		
		print(ans);
		ans = 0;
		NL;
	}
	
	

}
