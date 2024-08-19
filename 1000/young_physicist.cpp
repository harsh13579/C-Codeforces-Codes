#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x;
            if(j==0)
            sum1+=x;
            else if(j==1)
            sum2+=x;
            else
            sum3+=x;
        }
    }
    if(sum1==0 && sum2==0 && sum3==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}