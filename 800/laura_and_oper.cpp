#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,one=0,two=0,three=0;
        cin>>a>>b>>c;
        if((a&1)==(b&1))
            three=1;
        if((a&1)==(c&1))
            two=1;
        if((c&1)==(b&1))
            one=1;
        cout<<one<<" "<<two<<" "<<three<<endl;
    }
}