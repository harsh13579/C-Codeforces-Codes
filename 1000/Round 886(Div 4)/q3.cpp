#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        vector<char>res;
        char a[8][8];
        for(int i=0; i<8;i++)
        {
            for(int j=0; j<8;j++)
            {
                cin>>a[i][j];
                if(a[i][j]!='.')
                {
                    res.push_back(a[i][j]);
                }
            }
        }
        for(auto ele:res)
        cout<<ele;
        cout<<"\n";

    }
}