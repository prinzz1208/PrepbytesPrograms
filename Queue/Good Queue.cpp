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

void show(queue<int> q){
	queue<int> temp = q;
	while(!temp.empty()){
		print(temp.front())<<TAB;
		temp.pop();
	}
	NL;
}

int main()
{
	sync;
	queue<int> ans;
	int t,l,r;
	cin >> t;
	while(t--){
		cin >> l >> r;
		int count = 0;
		FOR(i,l,r+1){
			int arr[6] = {0},x = i;
			//queue<int> q;
			bool goodQ = true;
			while(x != 0){
				if ( x%10 <= 5 && arr[x%10] == 0){
					arr[x%10]++;
				}else{					
					goodQ = false;
					break;

				}
				x = x/10;
					
			}
			if(goodQ){
				ans.push(i);
				count++;
			}
		}
		//show(ans);
		print(count);
		NL;
	}
	
}

