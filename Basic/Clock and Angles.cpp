#include <bits/stdc++.h>
using namespace std;

int main()
{
	//write your code here
	int T; cin>>T;

	while(T--){
		int h, m;
		cin >> h; cin >> m;
		int out = abs((h * 360 / 12 + (m * 360) / (12 * 60)) - 6 * m);
		
		//int out90 = abs(90 - out) ? : out;
		//int out180 = abs(180 - out) ? : out;
		//int out270 = abs(270 - out) ? : out;
		//int out360 = abs(360 - out) ? : out;
			
		//if ( out90 < out) out = out90;  
		//if ( out180 < out) out = out180;  
		//if ( out270 < out) out = out270;  
		//if ( out360 < out) out = out360;  

		cout<< min(360-out,out) << endl;
	}
	return 0;
}
