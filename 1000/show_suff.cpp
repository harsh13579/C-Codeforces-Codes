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
        map<int,int>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        for(auto ele:m)
        {
            if(ele.second==1)
            {
                cout<<-1<<endl;
                flag=1;
                break;
            }
        }
        int j=0;
        if(flag==1)
        continue;
        else
        {
            for(auto ele:m)
            {
                int k=ele.second+j;
                for(int i=1;i<=ele.second;i++)
                {
                    if(ele.second%2!=0)
                    {
                        if(i==ele.second/2)
                        {
                            int h=k;
                            cout<<h-1<<" "<<h<<" ";
                            k-=2;
                            i++;
                        }
                        else
                        cout<<k--<<" ";
                    }
                    else
                    cout<<k--<<" ";
                }
                j+=ele.second;
            }
            cout<<endl;
        }
    }
}