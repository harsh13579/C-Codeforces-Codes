#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


/* clang-format on */

/* Main()  function */
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,ans=0;
        cin>>n;
        vector<int>v(n),forward,forward_ans,backward_ans;
        f(i,0,n)
            cin>>v[i];
        int m;
        cin>>m;
        f(i,0,n-1)
            forward.pb(v[i+1]-v[i]);
        
        forward_ans.pb(0);
        ans+=1;
        forward_ans.pb(ans);
        f(j,1,n-1)
        {
            if(forward[j-1]>forward[j])
            {
                ans+=1;
                forward_ans.pb(ans);
            }
            else
            {
                ans+=forward[j];
                forward_ans.pb(ans);
            }

        }
        ans=0;
        backward_ans.pb(0);
        ans+=1;
        backward_ans.pb(ans);
        rf(j,n-1,1)
        {
            if(forward[j-1]<forward[j])
            {
                ans+=1;
                backward_ans.pb(ans);
            }
            else
            {    
                ans+=forward[j-1];
                backward_ans.pb(ans);
            }
        }
        reverse(backward_ans.begin(),backward_ans.end());
        // print_v(forward_ans);
        // cout<<endl;
        // print_v(backward_ans);
        // cout<<endl;
        f(i,0,m)
        {
            cin>>a>>b;
            ans=0;
            if(a<b)
            {
                ans=abs(forward_ans[a-1]-forward_ans[b-1]);   
            }
            else
            {
                ans=abs(backward_ans[a-1]-backward_ans[b-1]);
            }
            cout<<min(abs(v[a-1]-v[b-1]),ans)<<endl;
        }  
    }
}