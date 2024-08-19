#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];
        sort(arr,arr+n);
        cout<<max(arr[0]*arr[1],arr[n-1]*arr[n-2])<<endl;
    }
}