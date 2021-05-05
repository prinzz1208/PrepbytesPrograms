#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

bool visit[10] ;
int recurr(int index, int n){
	if(index == n ){
		//print("falana");
		return 1;
	}
	int start = index == 0 ? 1 : 0;
	ll ct = 0;
	FOR(i,start,10){
		if(!visit[i]){
			visit[i] = true;
			ct += recurr(index+1,n);
			visit[i] = false;
		}

	}
	return ct;
}

int main()
{
	sync;
	int n;
	cin >> n;
	
	FOR(i,0,10)
		visit[i] = false;
	ll ct2 = 0;
	FOR(i,0,n+1){	
		ct2 += recurr(0,i);
	}
	print(ct2);
	//print(ans);

}


