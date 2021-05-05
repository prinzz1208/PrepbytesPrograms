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

typedef pair<int,int> ii;

bool comp(ii a, ii b){
	return a.sop > b.sop;
}
int main()
{
	sync;
	int n,ji,d,p; cin >> n;
	int max = INT_MIN;
	vector<pair<int,int>> v; 
	
	FOR(i,0,n){
		cin >> ji >> d >> p;
		if ( max < d )
			max = d;
		v.pb(mk(d,p));
	}
	int deadlines[max+1] = {0};
	sort(v.begin(),v.end(),comp);
	//for(ii a : v){
		//print(a.sop)<<TAB;
	//}
	//NL;
	int ans = 0;
	for (int i = 0; i < (int)v.size(); i++)
	{
		ii p = v[i];
		int j = p.fop;
		while(deadlines[j] != 0 && j > 0){
			j--;
		}
		if(j > 0 && deadlines[j] == 0 ){
			//test("j:",j)<<TAB;
			//test("p.sop:",p.sop)<<TAB;
			//NL;
			deadlines[j] = -1;
			ans+=p.sop;
		}

	}

	print(ans);


}

