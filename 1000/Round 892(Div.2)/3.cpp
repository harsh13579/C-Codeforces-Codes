#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,count=0,maxi=0,final_maxi=0;
        cin>>n;
        ll sum=0;
        q=1;
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }
        for(int i=1; i<=n; i++)
        {
            sum+=(i*i);
            count++;
            maxi=max(maxi,(i*i));
            if(q==n) break;
            if(count==q)
            {
                int k=i+1;
                for(int j=n; j>count; j--)
                {
                    sum+=(j*k);
                    maxi=max(maxi,(j*k));
                    k++;
                }
                final_maxi=max((ll)final_maxi,sum-maxi);
                count=0;
                i=0;
                sum=0;
                q++;
                
            }
        }
        cout<<final_maxi<<endl;
    }
}