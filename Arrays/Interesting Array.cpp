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


int main()
{
	sync;
	int T; cin >>T;
	int N,K;
	while ( T-- ) {
		cin >> N;
		int a[N],ia[N],ja[N];
		FOR(i,0,N){
			cin >> a[i];
		}
		cin >> K;
		int i=0,j=N-1,ia_index=0,ja_index=0,count=0;
		
		while(i<j){
			int temp = a[i] + a[j];
			if( temp == K){
				ia[ia_index++] = i++;
				ja[ja_index++] = j--;
				count++;
			}
			else if ( temp > K ){
				j--;
			} 
			else
				i++;
		}
		if(count == 1 ){
			cout << ia[0] << " " << ja[0];
		}
		else if ( count == 0 )
			print("no answer");
		else{
			int same = ja[0];
			int max = ja[0],max_i = 0;
			FOR(i,0,count){
				if ( ja[i] > max ){
					max = ja[i];
					max_i = i;
				}
				if (ja[i] != same ){
					same = -1;
					break;
				}
			}
			if ( same == -1 ){
				cout << ia[0] << " " << ja[0];
			}else{
				cout << ia[max_i] << " " << ja[max_i];
			}
		}
		NL;
	}
	
}

