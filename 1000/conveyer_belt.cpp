#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ll n,x1,y1,x2,y2,a,b;
        cin>>n>>x1>>y1>>x2>>y2;
        ll arr[4];
        if(x1<y1)
        {
             a=min(x1,n-y1+1);
        }
        else
        {
            a=min(y1,n-x1+1);
        }
        if(x2<y2)
        {
            b=min(x2,n-y2+1);
        }
        else
        {
            b=min(y2,n-x2+1);
        }
        if(a<b)
        {
            arr[0]=abs(y2-a);
            arr[1]=abs(x2-a);
            arr[2]=abs((n-a+1)-x2);
            arr[3]=abs((n-a+1)-y2);
        }
        else
        {
            arr[0]=abs(y1-b);
            arr[1]=abs(x1-b);
            arr[2]=abs((n-b+1)-x1);
            arr[3]=abs((n-b+1)-y1);
        }
        sort(arr,arr+4);

        cout<<arr[0]<<endl;



    }
}