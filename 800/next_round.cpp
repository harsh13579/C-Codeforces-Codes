#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,flag=0,x,j;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==k-1)
        j=x;
        if(x!=0)
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=j)
        count++;
    }
    cout<<count<<endl;

}