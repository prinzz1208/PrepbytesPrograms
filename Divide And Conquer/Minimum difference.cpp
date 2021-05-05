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

int solution(vector<int>& arr, int x)
{
	sort(arr.begin(), arr.end());
	int sum = 0;
	for (int i = 0; i < (arr.size() - 2); i++)
	{
		int k = i + 1, j = arr.size() - 1;
		while (k < j)
		{
			int sum2 = arr[i] + arr[k] + arr[j];
			if (x-sum2==0)
				 return sum2;
			else if (sum2 > x)
				j--;
			else
				k++;
			if(abs(x-sum2) < abs(x-sum) )
				sum = sum2;
		}
	}
	return sum;
}
// Driver code
int main()
{
	sync;
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
	 {
	   int ele;
	   cin>>ele;
	   arr.push_back(ele);
	 }
	cin>>x;
	cout << abs(x-solution(arr, x));
	NL;
  }
	return 0;
}
