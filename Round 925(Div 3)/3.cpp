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
        for(auto &i:v)
            cin>>i;
        int start=0;
        int end=n-1;
        int first=0;
        int last=n-1;
        if(v[start]==v[end])
        {
            for(int i=start;i<n;++i)
            {
                if(v[i]!=v[i+1])
                {
                    first=i+1;
                    break;
                }
                
            }
            for(int i=end;i>=0;i--)
            {
                if(v[i]!=v[i-1])
                {
                    last=i-1;
                    break;
                }
            }
            if(last<first)
                cout<<0<<endl;
            else
                cout<<last-first+1<<endl;
        }
        else
        {
            for(int i=start;i<n;i++)
            {
                if(v[i]!=v[i+1])
                {
                    first=i;
                    break;
                }
            }
            for(int i=end;i>=0;i--)
            {
                if(v[i]!=v[i-1])
                {
                    last=i;
                    break;
                }
            }
            if(first+1<n-last)
            {
                cout<<last<<endl;
            }
            else
                cout<<end-(first+1)+1<<endl;
        }
    }
}