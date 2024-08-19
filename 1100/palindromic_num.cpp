#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    vector<char> ans;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(s[0]=='9')
        {
            ans.resize(n);
            for(int i=n-1;i>=0;i--)
            {
               if(s[i] == '0')
                    ans[i] = '1';
                else if(s[i] == '1')
                    ans[i] = '0';
                else{
                    ans[i] = char((11 - (int(s[i])- 48)) + 48);
                    if(i>0)
                        s[i-1] += 1;
                }
            }
            for(char i:ans)
            {
                cout<<i;
            }
            cout<<"\n";
        }
        else{
            ans.assign(n,'9');
            for(int i=0;i<n;i++)
            {
                ans[i] = char((9 - (int(s[i])-48)) + 48);
            }
            for(char i:ans)
            {
                cout<<i;
            }
            cout<<"\n";
        }
    }
    return 0;
}