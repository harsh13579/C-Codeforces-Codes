#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s="codeforces";
    while(t--)
    {
        char j;
        cin>>j;
        int k=-1;
        k=s.find(j);
        if(k!=-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}