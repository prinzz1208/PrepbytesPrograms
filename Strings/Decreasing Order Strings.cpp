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

#define NL cout<<"\n"


string bsort(string a,int n){
	for (int i = 0; i <n-1 ; i++)
	{
		for (int j = 0; j <n-i-1 ; j++)
		{
			if(a[j]<a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}

	}
	return a;

}

int main()
{
	sync;
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		print(bsort(s,(int)s.length()));
		endl;
	}
}

