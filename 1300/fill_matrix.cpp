#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,count=0;
        cin>>x>>y;
        vector<int>v(y);
        for(int i = 0; i<y; i++)
            v[i]=i;
        int j=y;
        int i=0;
        int k=0;
        if(x<y)
            cout<<x+1<<endl;
        else if(y!=1) 
            cout<<y<<endl;
        else 
            cout<<0<<endl;
        while(x--)
        {
            while(j--)
            {
                cout<<v[(i+k)%y]<<" ";
                i++;
            }
            cout<<endl;
            i=0;
            k++;
            j=y;
            count++;
            if(count==y-1)
            {
                j=y;
                i=0;
                k=0;
                count=0;
            }
        }
    }
}