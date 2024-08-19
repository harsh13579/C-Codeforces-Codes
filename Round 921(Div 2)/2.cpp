#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        if(x%n==0)
        {
            cout<<x/n<<endl;
            continue;
        }
        else
        {
            int ans=1;
            for(int i=1;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    if(i>=n)
                        ans=max(ans,x/i);
                    if(x/i>=n)  
                        ans=max(ans,i);
                }
            }
            cout<<ans<<endl;
        }

        
    }
}