#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,r,b;
        cin>>n>>r>>b;
        vector<char>v;
        int a=r/(b+1);
        int ganda=r%(b+1);
        int acha=b+1-ganda;
        for(int i=0;i<acha;i++)
        {
            for(int j=0;j<a;j++)
            {
                v.push_back('R');
            }
            v.push_back('B');
        }
        for(int i=0;i<ganda;i++)
        {
            for(int j=0;j<a+1;j++)
            {
                v.push_back('R');
            }
            v.push_back('B');
        }
        v.pop_back();
       
        for(auto ele:v)
        cout<<ele;
        cout<<"\n";
    }
}