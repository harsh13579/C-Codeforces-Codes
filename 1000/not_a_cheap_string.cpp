#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sortby(const pair<char, int>& a,const pair<char, int>& b)
{
       return (a.second < b.second);
}
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll p,tot=0;
        cin>>p;
        vector<pair<char,int>>v;
        for(int i=0;i<s.size();i++)
        {
            v.push_back(make_pair(s[i],i+1));
            tot+=s[i]-96;
        }
        sort(v.begin(),v.end());
        while(tot>p)
        {
            tot-=(v[v.size()-1].first-96);
            v.pop_back();
        }
        sort(v.begin(),v.end(),sortby);
        for(auto i : v)
        {
            cout<<i.first;
        }
        cout<<"\n";
    }

}