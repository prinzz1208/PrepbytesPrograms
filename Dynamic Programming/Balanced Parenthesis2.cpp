
// C++ program for nth Catalan Number 
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


  
// Returns value of Binomial Coefficient C(n, k) 
ll binomialCoeff(ll n, 
                                ll k) 
{ 
    ll res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of [n*(n-1)*---*(n-k+1)] / 
    // [k*(k-1)*---*1] 
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
  
// A Binomial coefficient based function to find nth catalan 
// number in O(n) time 
ll catalan(ll n) 
{ 
    // Calculate value of 2nCn 
    ll c = binomialCoeff(2 * n, n); 
  
    // return 2nCn/(n+1) 
    return c / (n + 1); 
} 
  
// Driver code 
int main() 
{ 
	
    sync;
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2 == 0){
			vi a;
			FOR(i,0,n+1){
				a.pb(-1);
			}
			a[0] = 1;
			a[1] = 1;
			
			print(catalan(n/2));
		}else{
			print(0);
		}
		NL;
	}
    return 0; 
}
