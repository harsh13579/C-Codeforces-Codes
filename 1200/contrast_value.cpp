#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag1=0,flag2=0,flag3=0,res=1;
        cin>>n;
        vector<int> v(n);
        for(auto &i : v)
            cin>>i;
        v.erase(std::unique(v.begin(), v.end()), v.end());
        for(int i=0;i+1<n;i++)
        {
            if(v[i]!=v[i+1])
                flag3=1;
        }
        if(n==1 || !flag3)
        {
            cout<<1<<endl;
            continue;
        }
        else if(v[0]>=v[1])
            flag1=1;
        else 
            flag2=1;
        for(int i = 1; i+1 < v.size(); i++)
        {
            if(flag1)
            {
                if(v[i] < v[i+1])
                {
                    res++;
                    flag2=1;
                    flag1=0;
                }
            }
            else if(flag2)
            {
                if(v[i] > v[i+1])
                {
                    res++;
                    flag1=1;
                    flag2=0;
                }
            }
        }
        cout<<res+1<<endl;
    }
}