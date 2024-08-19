#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>e;
        vector<int>o;
        vector<int>ans;
        if(n==1)
        cout<<1<<endl;
        else if(n&1)
        cout<<-1<<endl;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i&1)
                o.push_back(i);
                else
                e.push_back(i);
            }
            for(int i=1; i<=n/2; i++)
            {   
                ans.push_back(e[i-1]);
                ans.push_back(o[i-1]);
            }
            for(auto ele:ans)
            cout<<ele<<" ";
            cout<<"\n";
        }
        
    }
}