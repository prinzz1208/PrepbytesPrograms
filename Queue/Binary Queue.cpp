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

string toBinary(int x){
	deque<int> dq;
	string str = "";
	//test("x:",x);
	//NL;
	do{
		dq.pb(x%2);
		x /= 2;
	}
	while( x != 0);
		
	while(!dq.empty()){
		str += to_string(dq.back());
		dq.pop_back();
	}
	//print(str);
	return str;
}
int main()
{
	sync;
	int n,t;
	cin >> t;
	while (t--)
	{
		queue<int> q;
		cin >> n;
		FOR(i,1,n+1){
			q.push(i);
		}
		while(!q.empty()){
			//toBinary(q.front());
			print(toBinary(q.front()))<<TAB;
			q.pop();
		}
		NL;
	}

}

