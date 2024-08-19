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
    while(t--)
    {
        int n;
        cin>>n;
        if(n-1==0)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" 2"<<endl;
        }
        else if(n&1)
        {
            cout<<"YES"<<endl;
            int f=n,s=n+1,l=2*n;
            while(f>0)
            {
                cout<<f<<" "<<s++<<endl;
                f-=2;
            }
            f=2;
            while(l!=s-1)
            {
                cout<<f<<" "<<l<<endl;
                f+=2;
                l--;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}