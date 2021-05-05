#include <bits/stdc++.h>
using namespace std;


#define ll long long int
#define vi vector<ll>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

set<string> st;
unordered_set<string> st2;

void recurr(int a[],int index, string out, int n){
	if((int)out.length() >= n ){
		//sort(out.begin(),out.end());
		st.insert(out);
		return;
	}
	FOR(i,index,2){
		string out2 = out;
		out2 += to_string(a[i]);
		recurr(a,i,out2,n);
	}
}

void recurr2(int a2[],int index, string out, int n){
	if((int)out.length() >= n ){
		//sort(out.begin(),out.end());
		st2.insert(out);
		return;
	}
	FOR(i,index,2){
		string out2 = out;
		out2 += to_string(a2[i]);
		recurr2(a2,i,out2,n);
	}
}

int main()
{
	sync;
	int n;
	cin >> n;
	int a[2] = {0,1};	
	int a2[2] = {1,0};	
	recurr(a,0,"",n);
	for(string s: st){
		print(s);
		NL;
	}
	recurr2(a2,0,"",n);
	
	for(string s: st2){
		print(s);
		NL;
	}
}


