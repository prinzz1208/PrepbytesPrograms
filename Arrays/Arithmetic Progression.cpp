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

#define NL cout<<endl
#define MAX 100001


int main()
{
	sync;
	int N;
	cin >> N;
	int a[N],ap[MAX]={-1},cd[MAX]={-1},count=0;
	FOR(i,0,MAX)
		ap[i] = -1;
	FOR(i,0,MAX)
		cd[i] = -1;
	
	FOR(i,0,N){
		cin >> a[i];
		if(ap[a[i]] == -1 ){
			ap[a[i]] = i;
			cd[a[i]] = 0;
			count++;	
			//test("if:",ap[a[i]]);
			//NL;		
		}
		else{
			if(cd[a[i]] == 0){				
				cd[a[i]] = i - ap[a[i]];
				ap[a[i]] = i;
			}
			else if( cd[a[i]] > 0 && cd[a[i]] != -2){
				if( cd[a[i]] == (i - ap[a[i]])) {
					ap[a[i]] = i;
				}
				else{
					cd[a[i]] = -2;
					count--;
				}
			}
			//else if(cd[a[i]] != -1 && ap[a[i]] != i && cd[a[i]] != -2){
				
			//}else{
			//}
		}
			
	}

	print(count); NL;
	FOR(i,0,MAX) {
		if(cd[i] > 0){
			cout << i << " " << cd[i]; NL;
		}
		else if(cd[i]==0){
			cout << i << " " << 0; NL;
		}
	}
}
