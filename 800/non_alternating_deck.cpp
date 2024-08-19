#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,count_a=0,count_b=0;
        int flag=0;
        cin>>n;
        count_a++;
        for(ll i=2;i<=n;i+=2)
        {
            if(count_a+count_b>n)
            {
                break;
            }
            if(flag==0)
            {
                count_b+=(2*i+1);
                flag=1;
            }
            else if(flag==1)
            {
                count_a+=(2*i+1);
                flag=0;
            }

        }
        //cout<<count_a<<" "<<count_b<<endl;
        if(count_a+count_b>n)
        {
            if(flag==0)
            {
                count_a-=(count_b+count_a-n);
            }
            else
            {
                count_b-=(count_b+count_a-n);
            }
        }
        cout<<count_a<<" "<<count_b<<endl;

    }
}