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
        ll  x,y,z;
        cin>>x>>y>>z;
        ll k;
        cin>>k;
        ll maxi=0;
        for(int i=1;i<=cbrt(k);i++)
        {
            if(k%i==0)
            {
                ll q=k/i;
                for(int j=1;j<=sqrt(q);j++)
                {
                    if(q%j==0)
                    {
                        ll w=q/j;
                        if(i<=x and j<=y and w<=z)
                        {
                            maxi=max(maxi,(x-i+1)*(y-j+1)*(z-w+1));
                        }
                        if(j<=x and w<=y and i<=z)
                        {
                            maxi=max(maxi,(x-j+1)*(y-w+1)*(z-i+1));
                        }
                        if(w<=x and i<=y and j<=z)
                        {
                            maxi=max(maxi,(x-w+1)*(y-i+1)*(z-j+1));
                        }
                        if(i<=x and w<=y and j<=z)
                        {
                            maxi=max(maxi,(x-i+1)*(y-w+1)*(z-j+1));
                        }
                        if(j<=x and i<=y and w<=z)
                        {
                            maxi=max(maxi,(x-j+1)*(y-i+1)*(z-w+1));
                        }
                        if(w<=x and j<=y and i<=z)
                        {
                            maxi=max(maxi,(x-w+1)*(y-j+1)*(z-i+1));
                        }
                        
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
}