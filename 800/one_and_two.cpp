#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>arr(n);
        map<int,int>m;
        for(int i=0; i<n; i++)
        {   
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(m[2]%2!=0)
        cout<<-1<<endl;
        else
        {
            if(m[2]==0)
            cout<<1<<endl;
            else
            {
                int k=m[2]/2;
                for(i=0; i<n; i++)
                {
                    if(arr[i]==2)
                    k--;
                    if(k==0)
                    break;
                }
                cout<<i+1<<endl;
            }
        }

    }
}