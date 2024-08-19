#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int j=-1,flag=0;
        string s,s1="",s2="";
        cin>>s;
        s1+=s[0];
        for(long long i=1; i<s.length(); i++)
        {
            s1+=s[i];
            s2+=s[i+1];
            s2+=s[i+2];
            //cout<<"S1:"<<s1<<endl;
            //cout<<"S2:"<<s2<<endl;
            j=s1.find(s2);
            s2="";
            if(j!=-1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}