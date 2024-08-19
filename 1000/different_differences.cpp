#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,x;
        cin>>k>>n;
        vector<int>v;
        vector<int>res;
        int i=1,j=1;
        while(i<=k)
        {
            if(j>=n)
                v.push_back(n);
            else
                v.push_back(j);
            
            j+=i;
            i++;
        }
        //for(auto ele:v)
          //cout<<ele<<" ";
            //cout<<"\n";
        if(v[v.size()-1]<n)
        {
            for(auto ele:v)
            cout<<ele<<" ";
            cout<<"\n";
            continue;
        }
        else if(v[v.size()-1]==n && v[v.size()-2]!=n)
        {
            for(auto ele:v)
            cout<<ele<<" ";
            cout<<"\n";
            continue;
        }
        int end=v.size()-1;
        int count=v.size();
        int sum=0,q;
        while(end>=0)
        {
            if(sum>=k)
            {
                break;
            }
            else
            {
                q=count;
                count--;
                
                if(end==v.size()-1)
                sum+=(v[end]-v[end-1]+count);
                else
                sum+=(v[end]-v[end-1]-q+count);
                
                end--;
            }            
        }
        for(int i=0;i<=end;i++)
        res.push_back(v[i]);

        int o=res.size();

        for(int i=o;i<k;i++)
            {
                x=res[res.size()-1]+1;
                res.push_back(x);
            }
        
        res.pop_back();
        res.push_back(n);

        for(auto ele:res)
        cout<<ele<<" ";
        cout<<endl;
    }
}