#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int k=-2,flag=0;
        if(a[0]==b[0])
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
            continue;
        }
        else if(a[a.size()-1]==b[b.size()-1])
        {
            cout<<"YES"<<endl;
            cout<<"*"<<a[a.size()-1]<<endl;
            continue;
        }
        else 
        {
            string p="";
            for(int i=0;i<a.size();i++)
            {
                p+=a[i];
                p+=a[i+1];
                k=b.find(p);
                if(k!=-1)
                {
                    cout<<"YES"<<endl;
                    cout<<"*"<<p<<"*"<<endl;
                    flag=1;
                    break;
                }
                p="";
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;

    }
}