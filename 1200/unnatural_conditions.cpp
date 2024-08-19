#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a="",b="";
    for(int i=0;i<400;i++)
    {
        if(i<200)
        {
            a += '9';
            b += '9';
        }
        else if(i<399)
            a += '0';
        else 
            a += '1';
    }
    cout<<b<<"\n";
    cout<<a<<"\n";
    return 0;
}