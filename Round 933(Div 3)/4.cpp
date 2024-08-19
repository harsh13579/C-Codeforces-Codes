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
        int n,m,x,r,n_p;
        char c;
        cin>>n>>m>>x;
        set<int>s;
        s.insert(x);
        for(int i=0;i<m;i++)
        {
            set<int>temp;
            cin>>r>>c;
            for(auto ele:s)
            {
                if(c=='0')
                {
                    n_p=((ele+r)%n);
                    if(n_p==0)
                        n_p=n;
                }
                else if(c=='1')
                {
                    n_p=((ele+(n-r))%n);
                    if(n_p==0)
                        n_p=n;    
                }
                else
                {
                    int n_p_c,n_p_cc;
                    n_p_c=((ele+r)%n);
                    n_p_cc=((ele+(n-r))%n);
                    if(n_p_c==0)
                        n_p_c=n;
                    if(n_p_cc==0)
                        n_p_cc=n;
                    temp.insert(n_p_c);
                    temp.insert(n_p_cc);
                    continue;
                }    
                temp.insert(n_p);
            }
            s=temp;
            // for(auto ele:s)
            //     cout<<ele<<" ";
            // cout<<endl;
        }
        cout<<s.size()<<endl;
        for(auto ele:s)
        {
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}