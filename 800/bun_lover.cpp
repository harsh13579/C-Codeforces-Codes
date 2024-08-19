#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans,sum=0;
        cin>>n;
        sum=(n*(n-1))+1-(n-1)+(n*4);
        cout<<sum<<endl;

    }
}