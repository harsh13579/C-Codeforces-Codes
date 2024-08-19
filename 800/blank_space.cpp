#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,maxsum=0;
        cin>>n;
        int arr1[n];
        
        for(int i=0; i<n; i++)
        cin>>arr1[i];
        if(n==1)
        {
            if(arr1[0]==1)
            sum=0;
            else
            sum=1;

            cout<<sum<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr1[i]==1 || (arr1[n-1]==0 && i==n-1))
                {
                    if((arr1[n-1]==0 && i==n-1))
                    sum++;
                    maxsum=max(sum,maxsum);
                    sum=0;
                    continue;
                }
                else
                {
                    sum++;
                }
            }
            cout<<maxsum<<endl;
        }
    }
}