#include<bits/stdc++.h>
using namespace std;
void swapi(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,flag;
        cin>>n;
        map<int,int>m;
        vector<int>arr(n),same,dist;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(m.size() == 1)
        cout<<"NO"<<endl;
        else
        {
            for(auto ele:m)
            {
                dist.push_back(ele.first);
                for(int i=2; i<=ele.second; i++)
                same.push_back(ele.first);
            }
            reverse(dist.begin(),dist.end());

            for(auto ele:same)
            {
                dist.push_back(ele);
            }
            cout<<"YES"<<endl;
            for(auto ele:dist)
            cout<<ele<<" ";
            cout<<"\n";

        }
    }
}