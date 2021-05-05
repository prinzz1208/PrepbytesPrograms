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

bool ans = false;
void recurr(int n,string a[],string S, string out, unordered_map<int,bool> b){
	if ( ans  )
		return;
	if(out.length() >= S.length()){
		//print(out);
		//NL;
		if(out == S)
				ans = true;
		return;
	} 
	FOR(i,0,n){
		//if(b.find(i) == b.end() || !b[i] ){
			b[i] = true;
			string out2 = out;
			out2 += a[i];
			if(!ans)
				recurr(n,a,S,out2,b);
			else
				return;
			b[i] = false;
			
		//}
	}
}
int main()
{
	sync;
	int t;
	cin >> t;
	while(t--){
		string S; cin >> S;
		int n;
		cin >> n;
		string strs[n];
		FOR(i,0,n) cin >> strs[i];
		unordered_map<int,bool> b;
		recurr(n,strs,S,"",b);
		if(ans)
			print("Yes");
		else
			print("No");
		
		NL;
		ans = false;
		
		
	}

}

