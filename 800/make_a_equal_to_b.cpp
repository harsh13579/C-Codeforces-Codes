#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,sum=0;
        cin>>n;
        vector<int>a(n),b(n);
        for(auto &i:a)
        {
            cin>>i;
            sum+=i;
        }
        for(auto &i:b)
        {
            cin>>i;
            sum-=i;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                count++;
        }
        cout<<min(count,1+abs(sum))<<endl;

    }
}