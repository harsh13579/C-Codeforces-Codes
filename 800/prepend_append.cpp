#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        int start=0;
        int end=n-1;
        if((s[0]=='1' && s[n-1]=='0') || (s[0]=='0' && s[n-1]=='1'))
        {
            while(start<end)
            {
                if((s[start+1]=='0' && s[end-1]=='1') || (s[start+1]=='1' && s[end-1]=='0' ) )
                {
                    start++;
                    end--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        else
        {
            cout<<n<<endl;
            continue;
        }
        if(flag==1)
        cout<<end-start-1<<endl;
        else
        cout<<0<<endl;
    }
}