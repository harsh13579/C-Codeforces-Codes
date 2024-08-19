#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        long long sum=0;
        cin>>n;
        vector<int> v(n);
        for(auto &i:v)
            cin>>i;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++)
        {
            if(v[i]>0)
            {
                break;
            }
            count++;
        }
        if(count&1)
        {
           
            for(int i = 0; i < n; i++)
            {
                if(i<count-1)
                    sum+=abs(v[i]);
                else
                    sum+=v[i];
                //cout<<"SUM:"<<sum<<endl;
            }
            if(count<n)
            {
                if(abs(v[count-1])>v[count])
                {
                    sum+=(2*abs(v[count-1]));
                    sum-=(2*v[count]);
                }
            }
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                    sum+=abs(v[i]);
            }
        }
        cout<<sum<<endl;
    }
}