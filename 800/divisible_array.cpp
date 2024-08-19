#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>arr1;
        for(int i=1;i<=n;i++)
        {
            arr1.push_back(2*i);
        }
        for(auto ele:arr1)
        cout<<ele<<" ";
        cout<<endl;
    }
}