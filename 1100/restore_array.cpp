#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,flag=0,mini,index;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n-1; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i+1<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                mini=v[i+1];
                index=i+1;
                flag = 1;
            }
            else if(v[i]==v[i+1] && v[i+2]<v[i+1] && (i+2)<n-1)
            {
                v[i+1]=v[i+2];
            }
        }
        if(flag==1)
            v.insert(v.begin()+index,v[index]);
        else
            v.insert(v.begin(),v[0]);
        for(auto ele:v)
            cout<<ele<<" ";
        cout<<"\n";
    }
}