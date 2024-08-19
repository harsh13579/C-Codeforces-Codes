#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,flag1=0;
        cin>>n;
        map<int,int>m;
        vector<int>v(n),ans(n,1),temp;
        for(auto &i : v)
        {
            cin>>i;
            m[i]++;
        }
        for(auto ele:m)
        {
            if(ele.second>1)
                temp.push_back(ele.first);
        }
        if(temp.size()<2)
            cout<<-1<<endl;
        else 
        {
            for(int i=0;i<n;i++)
            {
                if(flag==0)
                {
                    if(v[i]==temp[0])
                    {
                        ans[i]=2;
                        flag=1;
                    }
                }
                if(flag1==0)
                {
                    if(v[i]==temp[1])
                    {
                        ans[i]=3;
                        flag1=1;
                    }
                }
                if(flag&&flag1)
                    break;
            }
            for(auto ele:ans)
                cout<<ele<<" ";
            cout<<"\n";
        }
    }
}