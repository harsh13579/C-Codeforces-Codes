#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0; i<n/2; i++)
        {
            ans+= (arr[n-(i+1)]-arr[i]);
        }
        cout<<ans<<endl;
    }
}