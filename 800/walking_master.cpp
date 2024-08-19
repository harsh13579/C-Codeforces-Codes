#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)
        {
            cout<<0<<endl;
        }
        else if(b>d)
        {
            cout<<-1<<endl;
        }
        else
        {
            while(1)
            {
                
                if(a==c && b==d)
                {
                    break;
                }
                else if(a>c && b==d)
                {
                    count+=(a-c);
                    break;
                }
                else if(a<c && b==d)
                {
                    count=-1;
                    break;
                }
                else
                {
                    int res=d-b;
                    a+=res;
                    b=d;
                    count+=res;
                }
            }
            cout<<count<<endl;    
        }
    }
}

