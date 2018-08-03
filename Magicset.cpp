#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int T,ans=0,n,m;
    cin>>T;
    while(T--)
    {
        
        
            cin>>n>>m;
            int a[n],count=0;
            for(int i=0;i<n;i++)
            {
                    cin>>a[i];
                     if(a[i]%m==0)
                {
                count++;
                }

            }
            ans=pow(2,count)-1;
            cout<<ans<<endl;


    }
    return 0;
}
