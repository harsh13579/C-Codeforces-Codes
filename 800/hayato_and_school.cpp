#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,even_c=0,odd_c=0,flag=0;
        cin>>n;
        vector<int>w;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            if(x%2!=0)
            {
                odd_c++;
                if(flag==0)
                w.push_back(i+1);
                if(odd_c==3)
                flag=1;
            }
            else
            even_c++;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            for(auto ele:w)
            cout<<ele<<" ";
            cout<<"\n";
        }
        else
        {
            flag=0;
            int flag2=0;
            even_c=0;
            odd_c=0;
            w.clear();
            for(int i=0; i<n; i++)
            {
                if(v[i]%2==0)
                {
                    even_c++;
                    if(flag==0)
                    w.push_back(i+1);
                    if(even_c==2)
                    flag=1;
                }
                else
                {
                    odd_c++;
                    if(flag2==0)
                    w.push_back(i+1);
                    if(odd_c==1)
                    flag2=1;
                }
                if(w.size()==3)
                break;
            }
            if(w.size()<3)
            cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(auto ele:w)
                cout<<ele<<" ";
                cout<<"\n";
            }
        }
    }
}