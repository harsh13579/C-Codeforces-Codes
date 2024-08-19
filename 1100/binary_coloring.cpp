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
        ll n;
        cin>>n;
        vector<int>v(32,0);
        int i=0;
        while(n)
        {
            if(n&1)
            {
                v[i]++;
            }
            n=n>>1;
            i++;
        }
        for(int i=0;i<=32;i++)
        {
            int index=i;
            if(v[i]==1)
            {
                for(int j=i+1;j<=32;j++)
                {
                    if(v[j]==1)
                    {
                        v[j]=0;
                        index=j;
                    }
                    else
                        break;
                }
                if(index!=i)
                {
                    v[index+1]=1;
                    v[i]=-1;
                }
            }
        }
        cout<<32<<endl;
        for(auto ele:v)
            cout<<ele<<" ";
        cout<<"\n";


    }
}