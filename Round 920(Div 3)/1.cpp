#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        vector<int>x,y,diffx,diffy;
        for(int i=0;i<4;i++)
        {
            cin>>a>>b;
            x.push_back(a);
            y.push_back(b);
        }
        for(int i=0;i+1<4;i++)
        {
            diffx.push_back(x[i+1]-x[i]);
            diffy.push_back(y[i+1]-y[i]);
        }
        int ans=max(diffx[0]*diffx[0],diffy[0]*diffy[0]); 
        cout<<ans<<endl;
    }

}
