#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,ans,two,three;
    vector<int> v,b;
    map<int,int> m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.resize(n); 
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        for(auto x:m)
            if(x.second > 1)
                b.push_back(x.first);
        if(b.size() < 2)
            cout<<-1<<"\n";
        else{
            for(i=0;i<n;i++)
            {
                if(v[i] == b[0])
                {
                    b[0] = -1;
                    cout<<"2 ";
                }
                else if(v[i] == b[1])
                {
                    b[1] = -1;
                    cout<<"3 ";
                }
                else
                    cout<<"1 ";
            }
            cout<<"\n";
        }
        m.clear(); v.clear(); b.clear();
    }
    return 0;
}