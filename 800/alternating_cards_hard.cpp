#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,flag2=0,count_aw=0,count_bw=0,count_ab=0,count_bb=0,whites,blacks;
        int flag=0;
        cin>>n;
        count_aw++;
        for(ll i=2;i<=n;i+=2)
        {
            if(count_aw+count_bw+count_ab+count_bb>n)
            {
                break;
            }
            if(flag==0)
            {
                if(flag2==1)
                {
                    count_bw+=(i+1);
                    count_bb+=(i);
                    flag=1;
                    flag2=0;
                }
                else
                {
                    count_bb+=(i+1);
                    count_bw+=(i);
                    flag=1;
                    flag2=1;
                }

            }
            else if(flag==1)
            {
                if(flag2==1)
                {
                    count_aw+=(i+1);
                    count_ab+=(i);
                    flag=0;
                    flag2=0;
                }
                else
                {
                    count_ab+=(i+1);
                    count_aw+=(i);
                    flag=0;
                    flag2=1;
                }
            }

        }
        int k=count_aw+count_bw+count_ab+count_bb;
        if(k%2==0)
        flag2=1;
        else
        flag2=0;
        if(k>n)
        {
            if(flag==0)
            {
                if(flag2==1)
                {
                    whites=floor((k-n)/2);
                    blacks=(k-n)-whites;
                    count_aw-=whites;
                    count_ab-=blacks;
                }
                else
                {
                    blacks=floor((k-n)/2);
                    whites=(k-n)-blacks;
                    count_aw-=whites;
                    count_ab-=blacks;
                }
                
            }
            else
            {
                if(flag2==1)
                {
                    whites=floor((k-n)/2);
                    blacks=(k-n)-whites;
                    count_bw-=whites;
                    count_bb-=blacks;
                }
                else
                {
                    blacks=floor((k-n)/2);
                    whites=(k-n)-blacks;
                    count_bw-=whites;
                    count_bb-=blacks;
                }
            }
        }
        cout<<count_aw<<" "<<count_ab<<" "<<count_bw<<" "<<count_bb<<endl;

    }
}