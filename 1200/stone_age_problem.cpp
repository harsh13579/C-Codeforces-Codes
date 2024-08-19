#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q,a,b,c,flag=0,cur_val;
    long long sum=0;
    cin>>n>>q;
    vector<int>v(n);
    map<long long,long long>remem;
    for(auto &i:v)
    {
        cin>>i;
        sum+=i;
    }

    for(int i=0;i<q;i++)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c;
            if(flag==0)   
            { 
                      
                sum-=v[b-1];
                sum+=c;
                v[b-1]=c; 
            }
            else if(remem[b-1]==0)
            {
                sum-=cur_val;
                sum+=c;
                remem[b-1]=c;
            }
            else
            {
                sum-=remem[b-1];
                sum+=c;
                remem[b-1]=c;
            }
            cout<<sum<<endl;
        }
        else
        {
            cin>>b;
            flag=1;
            sum=n*b;
            cur_val=b;
            remem.clear();
            cout<<sum<<endl;
        }
    }
}