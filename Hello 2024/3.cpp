#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> &a, pair<int,int> &b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n),a,b;
        int count=0;
        for(auto &i:v)
            cin>>i;
        a.push_back(v[0]);
        for(int i=1;i<n;i++)
        {
            if(a.size()>0 && b.size()>0)
            {
                if(v[i]<a.back() && v[i]<b.back())
                {
                    if(b.back()<a.back())
                        b.push_back(v[i]);
                    else
                        a.push_back(v[i]);
                }
                else if(v[i]>a.back() && v[i]<b.back())
                    b.push_back(v[i]);
                else if(v[i]<a.back() && v[i]>b.back())
                    a.push_back(v[i]);
                else if(v[i]>a.back() && v[i]>b.back())
                {
                    if(b.back()<a.back())
                        b.push_back(v[i]);
                    else
                        a.push_back(v[i]);
                    count++;
                }
            }
            else
            {
                if(v[i]>a.back())
                    b.push_back(v[i]);
                else
                    a.push_back(v[i]);
            }
        }
        cout<<count<<endl;
    }
}