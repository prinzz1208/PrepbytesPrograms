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


string removeKdigits(string num, int k) {
	stack<int> s;
	
	for(int i=0; i < (int)num.length(); i++){
		if(s.empty())
			s.push(i);
		else{
			if ( num[s.top()] > num[i] ){
				num[s.top()] = '*';
				s.pop();
				if( num[i] == '0' && s.empty() ){
					
				}
			}
		}
	}
	//print(num);
	//NL;
	int n =(int)num.length();

	if ( k!= 0 && !s.empty()){
		while(k>0 && !s.empty()){
			num[s.top()] = '*';
			s.pop();
			k--;
		}    
	}else{
		if(k!=0){
			while(k>0){
				num[--n] = '*';
				s.pop();
				k--;
			}    

		}
	}
	for(int i = (int)num.length(); i >=0  ; i--){
		if(num[i] == '*'){
			num.erase(num.begin() + i);
		}
	}
	return num;
}   

int main()
{
	sync;
	print(removeKdigits("1435",3));
	
}
