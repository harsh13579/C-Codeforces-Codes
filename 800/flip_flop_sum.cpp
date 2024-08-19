#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,flag=0,count=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1)
            count++;
        }
        for(int i=0; i+1<n; i++)
        {
            if(arr[i]==-1 && arr[i+1]==-1)
            {
                sum+=4;
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            if(count==n)
            {
                sum=sum-4;
            }
            else
            sum=sum;
        }
        cout<<sum<<endl;
    }
}