#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];
        if(arr[0]!=arr[1] && arr[1]!=arr[2])
        {
            cout<<2<<endl;
            continue;
        }
        else if(arr[0]!=arr[1] && arr[0]!=arr[2])
        {
            cout<<1<<endl;
            continue;
        }
        else if(arr[n-1]!=arr[n-2] && arr[n-2]!=arr[n-3])
        {
            cout<<n-1<<endl;
            continue;
        }
        else if(arr[n-1]!=arr[n-2] && arr[n-1]!=arr[n-3])
        {
            cout<<n<<endl;
            continue;
        }
        else
        {
            int ans=arr[0];
            for(int i=0; i<n; i++)
            {
                if(arr[i]!=ans)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
            continue;
        }
    }
}