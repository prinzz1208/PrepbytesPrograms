//Gray Code
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long int i, j, k, n, size, temp, Xor, *a;

int pw(int n){
	int ans = 1;
	while(n--){
		ans *= 2;
	}
	return ans;
}
void output(int* a)
{	
		for(k=0; k<size; k++)
		cout<<a[k]<<" ";
	
	cout<<"\t\t";
}
int main()
{
	
	cin>>n;
	
	size=pw(n);
	
	int a[size];
	for(i=0;i<size;i++)
		a[i]=i;
	
	for(i=1; i<(size-1); i++)
	{
		//output(a);					//for checking array after every pass
		Xor=(a[i] ^ a[i+1]);
		
		if((Xor & (Xor-1))  != 0)				//checking if the value of xor is power of 2
		{
			for(j=i+2; j<size; j++)
			{
				Xor=(a[i] ^ a[j]);
				if((Xor & (Xor-1)) == 0)
				{
					temp=a[i+1];
					a[i+1]=a[j];
					a[j]=temp;
					
					break;
				}
			}
		}
	}
	
	output(a);		
		
return 0;
}
