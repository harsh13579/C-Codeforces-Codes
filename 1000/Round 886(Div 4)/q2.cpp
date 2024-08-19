#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int b,a,maxi=0;
        vector<pair<int,int>>v1;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            if(a<=10)
            {
                v1.push_back(make_pair(i,b));
                maxi=max(maxi,b);
            }
        }
        for(auto ele:v1)
        {
            if(ele.second==maxi)
            cout<<ele.first+1<<endl;

        }

    }
}