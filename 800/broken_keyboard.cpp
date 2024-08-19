#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count=0,i=0,ans=0;
        vector<pair<char,int>>v;
        vector<char>res;
        set<char>s1;
        cin>>s;
        while(i<s.length())
        {
            ans=i;
            count=0;
            //cout<<"Count "<<count<<endl;
            //cout<<"ans"<<ans<<endl;
            while(s[ans]==s[ans+1])
            {
                if(ans+1<s.length())
                {
                    count++;
                    ans++;
                }
            }
            count++;
            //cout<<count<<endl;
            v.push_back(make_pair(s[i],count));
            i+=count;
            //cout<<"I:"<<i<<endl;
        }
        for(auto ele:v)
        {
            if(ele.second%2!=0)
            {
                res.push_back(ele.first);
            }
        }
        for(int i=0;i<res.size();i++)
        s1.insert(res[i]);
        for(auto &e:s1)
        cout<<e;
        cout<<endl;
    }
}