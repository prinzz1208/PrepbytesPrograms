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

string numpad[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void recurr(string in,int n, int index, string out){
	//test("in[index]-'0':",in[index]-'0');
	//NL;
	if((int)out.length() >= n){
		print(out)<<TAB;
		return;
	}
	for( char ch: numpad[in[index]-'0'] ){
		//test("ch:",ch)<<TAB;
		//NL;
		string out2 = out;
		out2 += ch;
		
		recurr(in,n,index+1,out2);
	}
}

int main()
{
	sync;
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		recurr(s,(int)s.length(),0,"");
		NL;
	}
}

