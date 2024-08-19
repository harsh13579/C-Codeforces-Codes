#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,maxi=0;
        cin>>n>>q;
        vector<int>height(n),legs(q),max_pref(n);
        vector<long long>sum(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
            maxi=max(maxi,height[i]);
            max_pref[i]=maxi;
            if(i==0)
                sum[i]=height[i];
            else
                sum[i]=sum[i-1]+height[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>legs[i];
        }
        for(int i=0;i<q;i++)
        {
            int low=0,high=n;
            while(low<high)
            {
                int mid=low+(high-low)/2;
                if(max_pref[mid]>legs[i])
                    high=mid;
                else
                    low=mid+1;
            }
            if(low<n && max_pref[low]<=legs[i])
            {
                low++;
            }
            if(low==0)
                cout<<0<<" ";
            else
                cout<<sum[low-1]<<" ";
        }
        cout<<"\n";
    }
}

