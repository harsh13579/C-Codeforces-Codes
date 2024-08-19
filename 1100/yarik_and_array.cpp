#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,maxi=INT_MIN,sum=0;
        cin>>n;
        vector<int> v(n);
        cin>>v[0];
        sum=v[0];
        int curr_par=abs(v[0])%2;
        maxi=sum;
        for(int i=1; i<n; i++)
        {
            cin>>v[i];
            if(abs(v[i])%2!=curr_par)
                sum+=v[i];
            else
                sum=v[i];
            if(v[i]>sum)
                sum=v[i];
            curr_par=abs(v[i])%2;
            //cout<<"SUM:"<<sum<<endl;
            maxi=max(maxi,sum);
        }
        cout<<maxi<<endl;        
    }
}