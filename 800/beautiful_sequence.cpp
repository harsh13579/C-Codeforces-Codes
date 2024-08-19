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
        int arr[n];
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<=v.size(); j++)
            {
                if(v[j-1]==j)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
                break;
            }
            v.erase(v.begin());
        }
        if(flag!=1)
        cout<<"NO"<<endl;
    }
}
