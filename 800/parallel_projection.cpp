#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,d,h,a,b,f,g,ans;
        cin>>w>>d>>h>>a>>b>>f>>g;
        ans=abs(f-a)+b+g+h;
        ans=min(ans,abs(f-a)+2*d-b-g+h);
        ans=min(ans,abs(b-g)+a+f+h);
        ans=min(ans,abs(b-g)+2*w-a-f+h);
        cout<<ans<<endl;
    }
}