#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        vector<pair<int,int> >a_pair;
        cin>>n>>k;
        int a[n],b[n],res[n];
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                a_pair.push_back(make_pair(a[i],i));
            }    
        for(int i=0;i<n;i++)
        cin>>b[i];
        sort(a_pair.begin(),a_pair.end());
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            res[a_pair[i].second] = b[i];
        }
      
        for(int i=0;i<n;i++)
        cout << res[i] << " ";

    }
}