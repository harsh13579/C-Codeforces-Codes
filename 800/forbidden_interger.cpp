#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> v;
        if(x!=1)
        {
            for(int i=0;i<n;i++)
            v.push_back(1);
        }
        else if(k==1 || (k==2 && n&1))
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            while(n!=0)
            {
                if(n%2==0)
                break;
                else
                {
                    v.push_back(3);
                    n-=3;
                }
            }
            int a=n/2;
            for(int i=0;i<a;i++)
            v.push_back(2);
        }
        cout<<"YES\n";
        cout<<v.size()<<"\n";
        for(auto ele:v)
        cout<<ele<<" ";
        cout<<"\n";

    }

}
