#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans,i=0,flag=0,flag2=0;
        cin>>n;
        map<int,int>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(m[0]==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(auto ele:m)
        {
            if(ele.first == i)
            {
                i++;
            }
            else
            {
                flag2=1;
                break;
            }
        }
        if(flag2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<m.size();i++)
        {
            if(i+1<m.size())
            {
                ans=m[i];
                if(m[i+1]<=ans)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;

                }
            }
        }
        if(flag==0)
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