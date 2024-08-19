#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=INT_MAX;
        cin>>n;
        vector<int>di(n);
        vector<int>si(n);
        vector<int>mini;
        for(int i=0; i<n; i++)
        {
            cin>>di[i];
            cin>>si[i];
            si[i]+=(di[i]-1);
        }
        for(int i=0; i<n; i++)
        {
            k=abs(si[i]-di[i])/2;
            mini.push_back(di[i]+k);
        }
        sort(mini.begin(), mini.end());
        cout<<mini[0]<<endl;
        
    }
}