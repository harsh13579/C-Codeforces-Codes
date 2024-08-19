#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        string str;
        cin>>str;
        for(int i=str.length()-1; i>=0; i--)
        {
            if(i-1>=0)
            {

                if((str[i]!=str[i-1]))
                {
                    ans=i;
                    break;
                }
                else
                continue;
            }
        }
        if(ans==0)
        {
            ans=-1;
            cout<<ans<<endl;
        }
        else
        cout<<str.length()-1<<endl;
    }
}