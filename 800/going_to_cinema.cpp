#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,persons=0;
        cin>>n;
        vector<int>arr(n),v(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];

        sort(arr.begin(), arr.end());

        for(int i=0; i<n; i++)
        {
            if(arr[i]<=i)
            v[i]=1;
            else
            v[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                if(i==0)
                count++;
                else if (v[i-1]==0)
                count++;
            }
            
        }
        if (arr[0]>0)
        count++;
        cout<<count<<endl;
    }
}