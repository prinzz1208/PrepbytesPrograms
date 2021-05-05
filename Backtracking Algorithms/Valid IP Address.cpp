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
#define FOR(index,a,n) for (ll index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'

vs tokenize(string const &str, const char delim)
{
	vs out;
    // construct a stream from the string
    std::stringstream ss(str);
 
    std::string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(s);
    }
    return out;
}

bool checkValid(string s){
	
	vs tokens = tokenize(s, '.');
	for( string temp: tokens){
		if( stoi(temp) > 255 || (int)temp.length() > 3)
			return false;
		//print(temp)<<TAB;
	}
	//NL;
	return true;
}
void recurr(string out, int index, int dots){
	int n = (int)out.length();

	//checkValid(out);
	if( dots == 3 || index >= n){
		if(checkValid(out)){
			print(out);
			NL;
		}
		return;
	}
	
	string out1 = out;
	string out2 = out;
	string out3 = out;
	out1.insert(index, ".");
	//test("out1:",out1); NL;

	if(index + 1 < n)
		out2.insert(index+1, ".");
	//test("out2:",out2);	NL;
	
	if(index + 2 < n)
		out3.insert(index+2, ".");
	//test("out3:",out3);	NL;

	recurr(out1, index + 2, dots+1);
	recurr(out2, index + 3, dots+1);
	recurr(out3, index + 4, dots+1);
}

int main()
{
	sync;
	string s; cin >> s;
	recurr(s, 1, 0);
	//vs t = tokenize("255255.1.3", '.');
	//for(string temp: t)
		//print(temp)<<TAB;

}
