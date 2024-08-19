#include<bits/stdc++.h>
using namespace std;
#define ll long long

template <class T>
void print_v(vector<T> &v) 
{ 
    cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; 
}
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
int main()
{
    int t;
    cin>>t;
    vector<ll>arr;
    arr.push_back(0);
    ll k=1;
    while(k<1e18+1)
    {
        arr.push_back(k);
        k=(k*2)+1;
    }
    //print_v(arr);
    while(t--)
    {
        ll a,b,r;
        cin>>a>>b>>r;
        auto low1=lower_bound(arr.begin(),arr.end(),abs(a-b)/2)-arr.begin();
        long long mini=INT_MAX;
        for(int i=arr[low1];i<=arr[low1+1];i++)
        {
            cout<<i<<endl;
            mini=min(mini,abs((a^i) - (b^i)));
        }
        cout<<mini<<endl;
    }
}