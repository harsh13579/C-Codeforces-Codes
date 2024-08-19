#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q=0,z=0,i=0,j=0;
        cin>>n;
        string s;
        string a;
        //cout<<a<<endl;
        cin>>s;
        while(i<n)
        {
            while(j<n)
            {
                q++;
                if(s[i]==s[j+1])
                {
                    //cout<<s[i]<<endl;
                    a=a+s[i];
                    //cout<<q<<" this:"<<a<<endl;
                    q++;
                    j=q;
                    z=q;
                    break;
                }
                else
                j++;
            }
            i=z;
        }
        cout<<a<<endl;
    }
}