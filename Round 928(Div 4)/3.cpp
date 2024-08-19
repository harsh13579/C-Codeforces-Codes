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

int foo(int n,int a)
{
    int mul=1;
    int ans=0;
    int k=0;
    while(n)
    {
        // ans+= (n/10 + ((n%10 >=a)?1:0))*mul;
        if(n%10>a)
        {
            ans+= (n/10 +1 )*mul;
        }
        else if(n%10==a)
        {
            ans+= n/10*mul + (k+1);
        }
        else 
        {
            ans+= n/10*mul;
        }
        k+=n%10*mul;
        mul*=10;
        n/=10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    // int t=1000;
    while(t--)
    {
        int n;
        cin >> n;

        ll ans=0;
        for(int i=1;i<10;i++)
        {
            ans+=foo(n,i)*i;
            // cout << n << ": " << ans<< endl;
        }
        cout<< ans << endl;
    }
}