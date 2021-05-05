#include <bits/stdc++.h>
using namespace std;


#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
//#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

//struct compare  
//{  
	//bool operator()(const int& l, const int& r)  
	//{  
	   //return l > r;  
	//}  
//}; 
int main()
{
	sync;
	int t; cin >> t;
	while(t--){
		//int n; cin >> n;
		int q;
		string s,S = ""; cin >> s;
		cin >> q;
		int size = (int)s.length();
		priority_queue<int,vector<int>, greater<int> > pq;
		int i = 0;
		for ( i = 0; i < q; i++)
		{
			pq.push((int)s[i]);
			//a[i] = ((int)s[i]);
		}
		while(!pq.empty())
		{
			S += (char)pq.top();
			//cout << "falana";
			//NL;
			pq.pop();
			if(i < size)
				pq.push((int)s[i++]);
			
		}
		
		cout << S << "\n";
		
	}
}
