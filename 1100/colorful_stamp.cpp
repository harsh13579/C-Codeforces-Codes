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
        string s;
        cin>>s;
        // int q=s.find('B');
        // int w=s.find('R');
        // //cout<<q <<" "<< w<<endl;
        // if(q<0 && w<0)
        // {
        //     cout<<"YES"<<endl;
        //     continue;
        // }
        string k="";
        vector<string>v;
        for(int i=0; i<n; i++)
        {
            if(s[i]!='W')
                k+=s[i];
            else 
            {
                if(k!="")
                v.push_back(k);
                k="";
            }
        }
        if(k!="")
        {
            v.push_back(k);
        }
        int flag=0;
        for(auto ele:v)
        {
            //cout<<ele<<endl;
            int j=ele.find('R');
            int k=ele.find('B');

            if(j<0 || k<0)
                flag=1;
            //cout<<k<<" "<<j<<" ";
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

       
    }
}