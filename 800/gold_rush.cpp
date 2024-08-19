#include<bits/stdc++.h>
using namespace std;
map<int, int>p;
int comp(int n,int m)
{
    if(n==m)
    return 1;
    else 
    {
        if(n>m && n%3==0)
        {
            if(!p.count(n/3))
            {
                p[n/3]=comp(n/3,m);
            }
            if(!p.count((n/3)*2))
            {
                p[(n/3)*2]=comp((n/3)*2,m);
            }
            return p[n/3] || p[(n/3)*2];
        }
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        p.clear();
        int res=comp(n,m);
        if(res==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}