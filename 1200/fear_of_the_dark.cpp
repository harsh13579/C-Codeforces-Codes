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
        int hx,hy,ax,ay,bx,by;
        cin>>hx>>hy>>ax>>ay>>bx>>by;
        double dis_ha=sqrt((ax-hx)*(ax-hx)+(ay-hy)*(ay-hy));
        double dis_hb=sqrt((bx-hx)*(bx-hx)+(by-hy)*(by-hy));
        double dis_oa=sqrt((ax*ax)+(ay*ay));
        double dis_ob=sqrt((bx*bx)+(by*by));
        double a=max(dis_ha,dis_oa);
        double b=max(dis_hb,dis_ob);
        double c=max(min(dis_hb,dis_ha),min(dis_ob,dis_oa));
        c=max(c,(double)sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/2);
        cout<<setprecision(11)<<min(c,min(a,b))<<endl;
    }
}