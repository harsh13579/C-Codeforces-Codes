#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int mini=INT_MAX,count=0;
        vector<int>v(n);
        if(k==4)
        {
            for(auto &i:v)
            {
                cin>>i;
                if(i%2==0)
                    count++;
                int div=ceil((double)i/k);
                mini=min(mini,div*k-i);
            }
            mini=max(0,min(2-count,mini));
        }
        else
        {
            for(auto &i:v)
            {
                cin>>i;
                int div=ceil((double)i/k);
                mini=min(mini,div*k-i);
            }
        }
        cout<<mini<<endl;

    }
}