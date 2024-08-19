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
        int n,mini=INT_MAX,flag=0;
        cin>>n;
        vector<int>a(n),b(n+1);
        for(auto &i:a)
            cin>>i;
        for(auto &j:b)
            cin>>j;
        ll ans=0;
        for(int i=0;i<n;i++)
            ans+=abs(a[i]-b[i]);
        for(int i=0;i<n;i++)
        {
            if(max(a[i],b[i])>=b[n] && min(a[i],b[i])<=b[n])
            {
                flag=1;
                ans+=1;
                break;
            }
            else
            {
                mini=min(mini,min(abs(a[i]-b[n]),abs(b[i]-b[n])));
            }   
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            ans+=mini+1;
            cout<<ans<<endl;
        }

    }
}