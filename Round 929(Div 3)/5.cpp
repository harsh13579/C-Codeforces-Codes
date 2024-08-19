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
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
            cin>>v[i];
       }
       int m,l,u;
       cin>>m;
       for(int i=0;i<m;i++)
       {
            ll ans;
            cin>>l>>u;
            for(int i=l-1;i<n;i++)
            {
                u-=v[i];
                ll pos=0;
                ll neg=0;
                // if(u==0)
                // {
                //     ans=i+1;
                //     break;
                // }
                // else if(u<0)
                // {
                //     ans=i+1;
                //     break;
                // }
                // else if(i+1==n)
                // {
                //     ans=i+1;
                //     break;
                // }
                if(i+1<n)
                {
                    if(u<v[i+1])
                    {
                        ans=i+1;
                        break;
                    }
                }
                else if(i+1==n)
                {
                    ans=i+1;
                    break;
                }
            }
            cout<<ans<<" ";
       } 
       cout<<endl;
    }
}