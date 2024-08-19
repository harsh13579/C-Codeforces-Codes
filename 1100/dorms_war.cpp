#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char x[26];
    while(t--)
    {
        
        int n,m,count=0,maxi=0,j=-1;
        string s;
        cin>>n;
        cin>>s;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>x[i];
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(j!=-1)
                maxi=max(maxi,j-i);
            for(int k=0;k<m;k++)
            {
                if(x[k]==s[i])
                    j=i;
            }
        }
        cout<<maxi<<endl;
    }

}