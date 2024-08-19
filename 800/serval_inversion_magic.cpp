#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t,n,flag;
    cin>>t;
    string s;
    while(t--)
    {   
        flag=0;
        cin>>n>>s;
        
        for(int i=0;i<n/2;i++)
        {
            if(s[i]==s[n-i-1])
            {
                if(flag==1) 
                    flag=2;
            }
            else
            {    
                if(flag==2) 
                {
                    cout<<"No"<<endl;
                    flag=3;
                    break;
                }
                flag=1;
            }
        }
        if(flag!=3)
        cout<<"Yes"<<endl;
    }
   
    return 0;
}