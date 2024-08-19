#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v1(n);
        for(auto &i : v1)
        cin>>i;
        int v;
        int change=0;
        int mini=v1[0];
        int maxi=v1[0];

        for(int i=1;i<n;i++)
        {
            if(v1[i]>maxi)
            {
                maxi=v1[i];
            }
            if(v1[i]<mini)
            {
                mini=v1[i];
            }
            if(maxi-mini>2*x)
            {
                change++;
                mini=v1[i];
                maxi=v1[i];
            }
        }
        cout<<change<<endl;
    }
}