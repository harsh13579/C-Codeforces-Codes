#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string x,ans="1";
        cin>>x;
        int j;
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]>='5')
            {
                j=i;
                break;
            }
        }
        for(ll k=j;k-1>=0;k--)
        {
            if(x[k]>='4' && x[k-1]!='9' && k-1!=0)
            {
                x[k-1]+=(1-48);
                x[k]='0';
            }
            else if(x[k-1]=='9' && k-1!=0)
            {
                while(k-1>0)
                {
                    if(x[k-1]<'9')
                    {
                        x[k-1]+=(1-48);
                        break;
                    }
                    else
                        x[k-1]=0;
                }
            }
            else 
            {
                if(x[k-1]=='9')
                {
                    ans+=x;
                }
            }


        }
        cout<<ans<<endl;
    }
}