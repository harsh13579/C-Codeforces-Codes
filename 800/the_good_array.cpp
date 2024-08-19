#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int mini=n;
        for(int i=0;i<n;i++)
        {
            int left=(i+k-2)/k;
            int right=(n-i+k-1)/k;
            mini = min(mini,left+right);
        }
        cout<<mini+1<<endl;

    }
}