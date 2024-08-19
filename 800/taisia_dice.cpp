#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r,i;
        cin>>n>>s>>r;
        vector<int>ans;
        int k=r/(n-1);
        int maxi=s-r;
        int rem=r%(n-1);
        for(i=0;i<n-1;i++)
        {
            ans.push_back(k);
        }
        i=0;
        while(rem>0)
        {
            if(ans[i]<(s-r))
            ans[i]++;
            i++;
            rem--;
        }
        ans.push_back(maxi);

        for(auto ele:ans)
        cout<<ele<<" ";

        cout<<"\n";
    }
}