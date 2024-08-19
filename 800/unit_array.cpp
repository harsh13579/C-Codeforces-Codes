#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,sum,pro,temp;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        sum=(m[-1]*(-1))+(m[1]);
        if(m[-1]%2!=0)
        pro=-1;
        else
        pro=1;
        if(pro==1 and sum>=0)
        {
            cout<<0<<endl;
            continue;
        }
        else if(m[-1]%2!=0)
        {
            count++;
            m[-1]--;
            m[1]++;
            if(m[-1]>m[1])
            {
                int a=m[-1];
                for(int i=0; i<a; i++)
                {
                    count++;
                    //cout<<count<<endl;
                    m[-1]--;
                    //cout<<m[-1]<<endl;
                    m[1]++;
                    //cout<<m[1]<<endl;
                    if(m[1]>=m[-1] && m[-1]%2==0)
                    break;
                }
                cout<<count<<endl;
                continue;
            }
            else
            {
                cout<<count<<endl;
                continue;
            }
        }
        else
        {
            if(m[-1]>m[1])
            {
                int a=m[-1];
                for(int i=0; i<a; i++)
                {
                    count++;
                    //cout<<count<<endl;
                    m[-1]--;
                    //cout<<m[-1]<<endl;
                    m[1]++;
                    //cout<<m[1]<<endl;
                    if(m[1]>=m[-1] && m[-1]%2==0)
                    break;
                }
                cout<<count<<endl;
                continue;
            }
            else
            {
                cout<<0<<endl;
                continue;
            }
        }
    }
}