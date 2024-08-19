#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lcm(int a, int b)
{
    return a * b/__gcd(a, b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,k,a,b,c;
        cin>>n>>x>>y;
        k=n/lcm(x,y);
        a=n/x-k;
        b=n/y-k;
        c=n-a;
        ll sum_x=(n*(n+1)/2)-(c*(c+1)/2),sum_y=(b)*(b+1)/2;
        cout<<sum_x-sum_y<<endl;
    }
}