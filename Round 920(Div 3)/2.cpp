#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,sum1=0,fin1=0;
        cin>>n;
        string ini,fin;
        cin>>ini;
        cin>>fin;
        for(int i=0;i<n;i++)
        {
            
            if(ini[i]!=fin[i])
            {
                count++;
                if(ini[i]=='1')
                    sum1++;
                if(fin[i]=='1')
                    fin1++;
            }
        }
        count-=min(sum1,fin1);
        cout<<count<<endl;
    }

}
