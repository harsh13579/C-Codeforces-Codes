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
        string str,ans;
        cin>>str;
        vector<string>res;
        vector<string>fin;
        set<string>s;
        for(int i=0; i<n; i++)
        {
            if(i+1<n)
            {
                ans=str.substr(i,2);
                //cout<<ans<<" ";
                res.push_back(ans);
                s.insert(ans);
            }
            else
            break;
        }
        set<string>::iterator it;
        for(it = s.begin();it!=s.end();++it)
            fin.push_back(*it);
        cout<<fin.size()<<endl;
        


    }
}