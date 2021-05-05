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
	int T; cin >>T;
	while(T--)
	{
		string s1;
		string s2;
		cin >> s1;
		cin >> s2;
		ll a[101]={0};
		ll b[101]={0};
		ll c[10050]={0};
		ll n1 = (int)s1.length();
		ll n2 = (int)s2.length();
		ll n3 = n1 + n2;
		ll j = 0;
		FORD(i,n1-1,0) a[j++] = s1[i] - '0';
		j = 0;
		FORD(i,n2-1,0) b[j++] = s2[i] - '0';
		ll ci = 0;
		FOR(i,0,n2){			
			ll sum_carry=0,prod_carry = 0,prod,sum;
			FOR(j,0,n1){
				prod = (a[j] * b[i]) + prod_carry;
				sum = c[i+j];
				sum += prod % 10;
				sum_carry = sum / 10;
				c[i+j] = sum % 10;
				c[i+j+1] += sum_carry;
				ci = i+j;
				prod_carry = prod / 10;
				
			}
			if(prod_carry != 0){
				c[++ci] += prod_carry;
			}
			if(c[ci+1] != 0 )
				ci++;
			//c[++ci]+= sum_carry; 
		}
		FORD(i,ci,0){
			print(c[i]);
		}
		NL;
			
		//FORD(i,n3-1,0){
			//print(c[i]);
		//}
		//NL;

	
	}
}
