#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,m,k,a,b,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>m>>k>>a>>b;
        if(m-((m/k)*k)<=a  && (m/k)<=b)
        {
            ans=0;
        }
        else if(m-(b*k)<=a && (m/k)>b)
        {
            ans=0;
        }
        else
        {
            if(m-a-(k*b)>0)
            {
                long long q1=(m-a-b*k)/k;
                long long r1=(m-a-b*k)%k;
                if(r1>1)
                {
                    if(k-r1<=a)
                    {
                        ans=q1+1;
                    }
                    else
                    {
                        ans=q1+r1;
                    }
                }
                else
                {
                    ans=q1+r1;
                }
            }
            else
            {
                long long q1=(m-a-(m/k)*k)/k;
                long long r1=(m-a-(m/k)*k)%k;
                if(r1>1)
                {
                    if(k-r1<=a)
                    {
                        ans=q1+1;
                    }
                    else
                    {
                        ans=q1+r1;
                    }
                }
                else
                {
                    ans=q1+r1;
                }
            }
            
        }
        cout<<ans<<endl;
    }
}