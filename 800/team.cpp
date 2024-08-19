#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin>>n;
    while(n--)
    {
        map<int,int>m;
        int x;
        for(int i=0; i<3; i++)
        {
            cin>>x;
            m[x]++;
        }
        if(m[1]>=2)
        count++;

        m[1]=0;
    }
    cout<<count;
}

