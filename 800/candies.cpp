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
        if(n%2==0)
        {
            int ans=-1;
            cout<<ans<<endl;
            continue;
        }
        vector <int>v;
        string bits="";
        while(n)
        {
            if(n&1)
            {
                bits+="1";
            }
            else
            bits+="0";

            n>>=1;
        }
        reverse(bits.begin(), bits.end());
        for(int i=0; i<bits.size()-1; i++)
        {
            if(bits[i]=='1')
            v.push_back(2);
            else
            v.push_back(1);
        }
        cout<<v.size()<<endl;
        if(v.size()>40)
        {
            cout<<"-1";
            return 0;
        }
        for(auto ele:v)
        cout<<ele<<" ";
        cout<<endl;
    }
}