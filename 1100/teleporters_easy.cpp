#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,coins,x;
        cin>>n>>coins;
        vector<long long int> v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x+i+1);
        }
        sort(v.begin(),v.end());
        long long count=0,coin_sum=0;
        for(auto ele:v)
        {
            if(coin_sum<=coins)
            {
                count++;
                coin_sum+=ele;
            }
            else
            {
                break;
            }
        }
        if(coin_sum<=coins)
            count++;
        cout<<count-1<<endl;
    }
}
