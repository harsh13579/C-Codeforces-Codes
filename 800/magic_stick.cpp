#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(x==y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            if(x==2)
            {
                if(y==3 || y==1)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    continue;
                }
            }
            else if(x==1 || x==3)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
    }
}