#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
        long long n,count=0;
        cin>>n;
        vector<long long>arr(n);
        for(long long i=0; i<n; i++)
        cin>>arr[i];
        sort(arr.begin(), arr.end());
        if(arr[0]>1)
        {
            count+=(arr[0]-1);
            arr[0]=1;
        }
        for(long long i=0; i+1<n; i++)
        {
            if(arr[i+1]==arr[i])
            {
                continue;
            }
            else if(arr[i+1]-arr[i]==1)
            {
                continue;
            }
            else 
            {
                count+=(arr[i+1]-arr[i]-1);
                arr[i+1]=arr[i]+1;
                
            }
        }
        cout<<count<<endl;
   } 
}