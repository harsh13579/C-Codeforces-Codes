#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,maxi=0;
        cin>>n>>k;
        vector<int>a(n),h(n);
        for(auto &i:a)
            cin>>i;
        long long sum=a[0];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            if(a[i]<=k)
                maxi=1;
        }
        int start=0,end=1,mid=0;
        while(end<n)
        {
            if(h[mid]%h[end]==0 && sum+a[end]<=k)
            {
                maxi=max(maxi,end-start+1);
                sum+=a[end];
                end++;
                mid++;
            }
            else if(h[mid]%h[end]!=0)
            {
                mid++;
                end++;
                start=mid;
                sum=a[start];
            }
            else
            {
                sum-=a[start];
                start++;
            }
        }
        cout<<maxi<<endl;
    }
}