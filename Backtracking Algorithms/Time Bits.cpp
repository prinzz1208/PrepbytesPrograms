
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

vs ans;
bool checkUnique(string s){
	FOR(i,0,(int)ans.size()){
		if(ans[i] == s )
			return false;
	}
	return true;
}
void recurr(string hh, string mm, int n, int cn, int im, int ih){
	//test("hh:",hh)<<TAB;
	//test("mm:",mm)<<TAB;
	//NL;
	
	if ( n == cn ){
		ll h = bitset<4>(hh).to_ulong();
		ll m = bitset<6>(mm).to_ulong();
		if(h > 11 || m > 59)
			return;
		string s = to_string(h) + ":" + to_string(m);
		if(checkUnique(s)) ans.pb(s);
		//cout << h << ":" << m << TAB;
		return;
	}
	FOR(i,im,6){
		if (mm[i] != '1')
		{
			string mm2 = mm;			
			mm2[i] = '1';
			recurr(hh,mm2,n,cn+1,im+1,ih);
		}
	}
	
	FOR(i,ih,4){
		if (hh[i] != '1')
		{
			string hh2 = hh;
			hh2[i] = '1';
			recurr(hh2,mm,n,cn+1,im,ih+1);
		}	
	}
	
}

int main()
{
	sync;
	int n;
	cin >> n;
	
	string mm = "000000";
	string hh = "0000";
	recurr(hh,mm,n,0,0,0);
	for(string x: ans){
		print(x)<<TAB;
	}
	
}
