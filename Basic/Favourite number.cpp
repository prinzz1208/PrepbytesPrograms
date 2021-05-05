#include <iostream>
using namespace std;
int main()
{
	int T; cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n, count = 0; cin >> n;
		while(n > 0){
			if( n % 10 == 5) count++;
			n = n / 10;
		}
		cout<<count<<endl;
	}
	
	
	
}
