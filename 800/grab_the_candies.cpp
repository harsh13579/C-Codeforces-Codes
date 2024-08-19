#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum_odd=0,sum_even=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                sum_even+=arr[i];
            }
            else
            {
                sum_odd+=arr[i];
            }
        }
        if(sum_even>sum_odd)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}