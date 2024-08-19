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
        int n,tot_m=0,tot_p=0,tot_mp=0;
        cin>>n;
        string s;
        cin>>s;
        string m="map";
        string p="pie";
        string mp="mapie";
        int pos=s.find(m);
        while (pos<s.length())
        {
            pos++;
            tot_m++;
            pos=s.find(m,pos);
        }
        pos=s.find(p);
        while (pos<s.length())
        {
            pos++;
            tot_p++;
            pos=s.find(p,pos);
        }
        pos=s.find(mp);
        while (pos<s.length())
        {
            pos++;
            tot_mp++;
            pos=s.find(m,pos);
        }
        cout<<(tot_m-tot_mp)+(tot_p-tot_mp)+tot_mp<<endl;
    }
}