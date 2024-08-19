#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,maxi=INT_MIN;
        cin>>n;
        long long sum_odd = 0,sum_even = 0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            maxi=max(v[i],maxi);
            if(v[i]>=0)
                flag=1;
            if(v[i]>0 && i%2==0)
                sum_even+=v[i];
            else if(v[i]>0 && i%2!=0)   
                sum_odd+=v[i];
        }
        if(!flag)
            cout<<maxi<<endl;
        else
            cout<<max(sum_odd,sum_even)<<endl;

    }
}