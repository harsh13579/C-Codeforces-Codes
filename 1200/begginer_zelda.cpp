#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,count=0;
        map<int,int>m;
        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            m[a]++;
            m[b]++;
        }
        for(auto i:m)
        {
            if(i.second==1)
                count++;
        }
        cout<<ceil((double)count/2)<<endl;
    }
}