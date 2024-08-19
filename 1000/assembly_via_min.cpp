#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll x;
        vector<ll>b,ans;
        int k=(n*(n-1))/2;
        for(int i=0; i<k; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        int j=1;
        for(int i=n-j-1;i<k;i+=(n-j))
        {
            j++;
            ans.push_back(b[i]);
            if(j==n)
            break;
        }
        ll o=ans[ans.size()-1];
        ans.push_back(o);

        for(auto ele:ans)
        cout<<ele<<" ";
        cout<<"\n";

    }
}