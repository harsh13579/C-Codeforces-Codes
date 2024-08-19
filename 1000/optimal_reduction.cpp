#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,flag2=0,flag3=0;
        cin>>n;
        vector<int>a(n);
        for(auto &i : a)
        cin>>i;
        for(int i=0;i+1<n;i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
            }
            else if(a[i]<a[i+1])
            {
                if(!flag)
                flag2=1;
                else
                {
                    flag3=1;
                    break;
                }
            }

        }
        if(flag3)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}