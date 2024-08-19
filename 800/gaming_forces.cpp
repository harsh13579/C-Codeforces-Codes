#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,count=0;
        cin>>n;
        vector<int> v(n);
        for(auto &i : v)
        {
            cin>>i;
            if(i==1)
            count++;
        }
        if(n==1)
        {
            sum=1;
        }
        else
        {
            if(count%2==0)
            {
                sum+=count/2;
            }
            else
            sum+=count/2 +1;
            sum+=(n-count);
        }
        cout<<sum<<endl;


    }
}

