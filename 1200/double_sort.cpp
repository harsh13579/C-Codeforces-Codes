#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int>a(n),b(n);
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1] || b[j]>b[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(b[j],b[j+1]);
                    v.push_back(make_pair(j+1,j+2));
                }
            }
        }
        for(int i=0; i+1<n; i++)
        {
            if(b[i]>b[i+1] || a[i]>a[i+1])
            {
                flag=1;
                cout<<-1<<endl;
                break;
            }
        }
        if(!flag)
        {
            cout<<v.size()<<endl;
            for(auto i:v)
            {
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
    }

}
