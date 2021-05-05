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

int findMax(queue<int> q){
	queue<int> q2 = q;
	int max = INT_MIN;
	while(!q2.empty()){
		if(q2.front() > max){
			max = q2.front();
		}
		q2.pop();

	}
	return max;
}
int main()
{
	sync;
	int n,k;
	cin >> n; cin >> k;
	int a[n];
	FOR(i,0,n){
		cin >> a[i];
	}
	int i = 0;
	queue<int> q;
	while(i < k){
		q.push(a[i]);
		i++;
	}
	print(findMax(q))<<TAB;
	while( i < n){
		q.push(a[i]);
		q.pop();
		print(findMax(q))<<TAB;
		i++;
	}
	
}

