#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        long long AB=abs(d-b)+abs(c-a);
        long long AC=abs(f-b)+abs(e-a);
        long long BC=abs(f-d)+abs(e-c);
        long long ans=(AB+AC-BC)/2+1;
        cout<<ans<<"\n";
    }
}

