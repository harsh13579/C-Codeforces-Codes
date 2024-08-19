#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,count=0,sum=0,flag=0;
        cin>>n;
        vector<int>arr(n);
        vector<int>k;
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i]!=0)
            k.push_back(arr[i]);
        }
        for(long long i=0; i<k.size(); i++)
        {
            if(k[i]<0)
            {
                if(flag==0)
                {
                    count++;
                }
                flag=1;
            }
            else
            flag=0;
        }
        
        cout<<sum<<" "<<count<<endl;
    }
}