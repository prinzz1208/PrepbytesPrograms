// Distance Program
#include <iostream>
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

struct Cell
{
    int a;
    int b;
    int val;
};
        
int main()
{
	sync;
    int t,n,m;
    cin>>t;
    
    for(int x=0; x<t; x++)
    {
        cin>>n>>m;
        
        Cell c[n*m];
        
        for(int y=0; y<(n*m); y++)
            cin>>c[y].val;
        
        int i,j,k,l;
        for(i=0, k=0; i<n; i++)
            for(j=0; j<m; j++, k++)
            {
                c[k].a=i;
                c[k].b=j;
            }
            
        for(k=0; k<n*m; k++)
        {
            if(c[k].val==1)
               cout<<0<<" ";
                
            else if(c[k].val==0)
            {    
                int distance;
                bool flag=false;
                
                for(l=0; l<n*m; l++)
                {
                    if(c[l].val==1)
                    {
                        if(flag==false)
                        {
                            distance = abs(c[k].a - c[l].a) + abs(c[k].b - c[l].b);             //first value for distance
                            flag=true;
                        }
                        
                        else if(flag==true)
                        {   
                            if(distance > abs(c[k].a - c[l].a) + abs(c[k].b - c[l].b))
                                distance = abs(c[k].a - c[l].a) + abs(c[k].b - c[l].b);
                        }
                    }
                }
                cout<<distance<<" ";
            }
        }
        cout<<"\n";
        
    }// end of test cases loop
}
