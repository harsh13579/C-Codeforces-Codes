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
        int j=0,flag=0,flag2=0;
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]>='5')
            {
                j=i;
                flag2=1;
                break;
            }
        }
        if(flag2==0)
        {
            cout<<x<<endl;
            continue;
        }
        if(x[0]=='9')
        {
            for(int i=0; i<x.size(); i++)
            {
                x[i]='0';
                ans+=x[i];
            }
            cout<<ans<<endl;
            continue;
        }
        for(int i=j+1;i<x.size();i++)
        {
            x[i]='0';
        }
        for(ll k=j;k>=0;k--)
        {
            if(x[k]>='5' && x[k]!='9' && k!=0)
            {
                x[k-1]+=1;
                x[k]='0';
            }
            else if(x[k]=='9')
            {
                while(k>=0)
                {
                    if(x[k]<'9')
                    {
                        x[k]+=1;
                        break;
                    }
                    else
                    {
                        x[k]='0';
                    }
                    k--;
                }
                k++;
            }
            else 
            {
                if(x[k]>='5')
                {
                    x[k]='0';
                    ans+=x;
                    flag=1;
                }
            }


        }
        if(flag==1)
        cout<<ans<<endl;
        else
        cout<<x<<endl;
    }
}