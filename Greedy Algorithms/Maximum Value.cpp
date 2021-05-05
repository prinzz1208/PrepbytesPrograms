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

typedef pair<int,double> ifl;

bool cmp(ifl a , ifl b ){
	return a.sop > b.sop;
}

int main()
{
	sync;
	int n,W;
	cin >> n >> W;
	double w[n],v[n];
	vector<pair<int,double>> vw;
	FOR(i,0,n){
		cin >> v[i] >> w[i];
		vw.pb(mk(w[i],v[i]/w[i]));
	}
	sort(vw.begin(),vw.end(),cmp);
	//for(pair<int,double> p:vw)
		//print(p.sop)<<TAB;
	
	double ans = 0;
	for (int i = 0; i < n && W > 0 ; i++)
	{
		if(W-vw[i].fop >= 0){
			ans += vw[i].fop * vw[i].sop;
			W -= vw[i].fop;
		}else{
			ans += vw[i].sop * W;	
			break;
		}		
	}
	
	print(round(ans));
}

