#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            arr[i]=0;
            else
            arr[i]=1;
        }
        for(int i=0; i+1<n; i++)
        ans+=(!(arr[i]^arr[i+1]));

        cout<<ans<<endl;
    }
}