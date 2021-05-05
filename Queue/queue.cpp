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
	int n,x,t;
	cin >> t;
	while (t--)
	{
		queue<int> q,q2;
		stack<int> s;

		cin >> n;
		FOR(i,0,n){
			cin >> x;
			q.push(x);
		}
		while(!q.empty()){
			s.push(q.front());
			q.pop();
		}
		while(!s.empty()){
			q2.push(s.top());
			s.pop();
		}
		show(q2);
		NL;
	}

}
