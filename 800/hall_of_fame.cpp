#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=-1,m=-1,j=-1;
        cin>>n;
        string s;
        cin>>s;
        k=s.find("R");
        m=s.find("L",k+1);
        j=s.rfind("L",k-1);
        if(k==-1)
        {
            cout<<-1<<endl;
        }
        else if(m==-1)
        {
            if(j!=-1 && k!=-1)
            {
                cout<<j+1<<endl;
            }
            else if(j==-1)
            {
                cout<<-1<<endl;
            }
        }
        else if(m!=-1)
        {
            cout<<0<<endl;
        }
    }
}
