#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i : v)
        cin>>i;
        if(n%2!=0)
        {
            cout<<"Mike"<<endl;
        }
        else
        {
            int mini=0;
            for(int i=0;i<n;i++)
            {
                if(v[i]<v[mini])
                mini=i;
            }
            if(mini%2==0)
            cout<<"Joe"<<endl;
            else
            cout<<"Mike"<<endl;
        }

    }
}