#include<bits/stdc++.h>
using namespace std;

int main()

{
    int _;
    cin>>_;
    while(_--)
    {
        int n;
        cin>>n;
        if(n%2!=0) 
        cout<<-1<<endl;
        else 
        cout<<"1 "<<n/2<<endl;
    }
}