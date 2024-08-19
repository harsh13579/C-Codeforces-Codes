#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=-1;
        cin>>n>>k;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if((str[i]-48)<k)
            {
                ans=i;
                break;
            }
            else
            continue;
        }
        if(ans==-1 || k==0)
        cout<<str<<k<<endl;
        else
        {
        str.insert(ans,to_string(k));
        cout<<str<<endl;
        }
    }
}