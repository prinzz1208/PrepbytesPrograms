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

void show(stack<int> s){
	NL;
	print("stack:");
	stack<int> s2 = s;
	while(!s2.empty()){
		print(s2.top())<<TAB;
		s2.pop();
	}
	NL;
}
int val (char c){
	switch(c){
		case 'O':
			return 16;
		case 'C':
			return 12;
		case 'H':
			return 1;
		default :
			return 0;
	}
}
int main()
{
	sync;
	string s;
	cin >> s;
	stack<int> s1;
	int n = (int)s.length();
	FOR(i,0,n) {
		show(s1);
		if(s[i] - '0' > 0 && s[i] - '0' < 10){
			int temp = s1.top() * (s[i] - '0');
			//test("temp num:",temp);NL;
			s1.pop();
			s1.push(temp);
			
		}
		else if ( s[i] == '(' ){
			int temp = 0;
			i++;
			while(s[i] != ')' && s[i] != '(' ){
				if(s[i] - '0' > 0 && s[i] - '0' < 10){
					temp -= val(s[i-1]);
					temp += val(s[i-1]) * (s[i] - '0');
				}else
					temp += val(s[i]);
				i++;
			}
			
			i--;
			
			//else if ( s[i] == ')'){
				//if ( !s1.empty()){
					//temp += s1.top();
					//s1.pop();
				//}
			//}
			if(temp!=0)
				s1.push(temp);
		}
		else if ( s[i] == ')' ){
			int temp = s1.top();
			s1.pop();
			if(!s1.empty()){
				temp += s1.top();
				s1.pop();
			}
			if( i < n && (s[i+1] - '0' > 0 && s[i+1] - '0' < 10)) {
				temp = temp* (s[i+1] -'0');
				i++;
			}
			
			s1.push(temp);
		}
		else
			s1.push(val(s[i]));
	}
	int ans = 0;
	while(!s1.empty()){
		test("stack:",s1.top());
		NL;
		ans += s1.top();
		s1.pop();
	}
	print(ans);
}

