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


int main()
{
	sync;
	int T;
	cin >> T;
	while (T--) {
	
		string s;
		cin >> s;
		int n = (int)s.length(),stack=0,count=0; 
		//for (int i = 0,j = n - 1; i < j; i++,j--)
		if(n>1){
			for (int i = 0; i < n; i++)
			{
				//if((s[i] == '(') && (s[j] == ')')) continue;
				//else count++;
				if(s[i] == '(') stack++;
				else if (s[i] == ')') stack--;
				
				if(stack < 0)
					count++;
				//else if(stack == 0 && i != n-1)
					//count++;
				else if(i == n-1 && stack > 0 )
					count+=stack-1;
			}
			if(count <= 1) print("Yes");
			else print("No");
			NL;

		}else{
			print("No");NL;
		}
		
		//FEI(el,a) print(el)<<TAB;
		//NL;
		//else print("No");
		
	
	}
}
