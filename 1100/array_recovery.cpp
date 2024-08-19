#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum,check;
    cin>>t;
    vector<int> v,ans;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        ans.resize(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ans[0] = v[0];
        sum = v[0];
        check = 0;
        for(i=1;i<n;i++)
        {
            if(sum>=v[i] and v[i] != 0)
            {
               check = 1;
               break; 
            }
            else{
                ans[i] = sum+v[i];
                sum+=v[i];
            }
        }
        if(check)
            cout<<-1<<"\n";
        else{
            for(int i:ans)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        v.clear(); ans.clear();
    }
    return 0;
}