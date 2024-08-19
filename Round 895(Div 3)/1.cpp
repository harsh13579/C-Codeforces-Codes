#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,count=0;
        cin>>a>>b>>c;

        int mini=min(a,b);
        int maxi=max(a,b);
        if(mini==maxi)
        cout<<0<<endl;
        else
        {
            while(mini<=maxi)
            {
                mini+=c;
                maxi-=c;
                count++;
                if(mini==maxi)
                    break;
            }
            cout<<count<<endl;
        }
    }
}