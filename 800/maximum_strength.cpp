#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string l,r,a="";
        cin>>l>>r;
        ll sum=0,j=-1;
        if(l.length()<r.length())
        {
            for(int i=0;i<r.length()-l.length();i++)
            a=a+"0";
            
        }
        a+=l;
        //cout<<a;
        for(int i=0;i<r.length();i++)
        {
            if(a[i]==r[i])
            continue;
            else
            {
                //cout<<sum<<endl;
                j=i;
                break;
            }
        }
        if(j==-1)
        {
            cout<<0<<endl;
            continue;
        }
        sum=sum+(9*(r.length()-j-1));
        //cout<<"sum"<<sum<<endl;
        int q=abs(a[j]-r[j]);
        //cout<<"q"<<q<<endl;
        cout<<sum+q<<endl;

    }
}