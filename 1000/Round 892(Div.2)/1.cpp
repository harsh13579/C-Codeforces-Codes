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
        vector<ll>a(n);
        vector<ll>b;
        vector<ll>c;
        for(auto &i : a)
        cin>>i;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++)
        {
            if(a[i] == a[0])
            b.push_back(a[i]);
            else
            c.push_back(a[i]);
        }
        if(b.size() == 0 || c.size() == 0)
        cout<<-1<<endl;
        else
        {
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(auto ele:b)
            cout<<ele<<" ";
            cout<<"\n";
            for(auto ele:c)
            cout<<ele<<" ";
            cout<<"\n";
        }

    }
}