#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
    ll t;
    cin>>t;
    while(t--){
        ll a,b,l;
        cin>>a>>b>>l;
        set<ll>st;
        ll prod1=1,prod2=1,z=0,x=0;
        while(prod1<=l){
            z=0;
            prod1=pow(a,x); prod2=1;
            while(prod2<=l){
                prod2=pow(b,z);
                ll ans=prod1*prod2;
                if(ans<=l && (l%(ans))==0){
                    st.insert((l/ans));
                }
                z++;
            }
            x++;
        }
        cout<<st.size()<<endl;
    }
}