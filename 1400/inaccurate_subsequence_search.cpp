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
        int n,m,k,j;
        map<int,int>avail,unused;
        cin>>n>>m>>k;
        vector<int>a(n);
        for(auto &i:a)
            cin>>i;
        for(int i=0;i<m;i++)
        {       
            cin>>j;
            avail[j]++;
        }
        int start=0,end=0;
        int count=0,ans=0;
        while(end!=m)
        {
            if(avail[a[end]]>0)
            {
                count++;
                avail[a[end]]--;
            }
            else
                unused[a[end]]++;
            end++;
        }
        
        if(count>=k)
            ans++;
        start++;
        while(end<n)
        {
            if(avail[a[end]]>0)
            {
                count++;
                avail[a[end]]--;
            }
            else
            {
                unused[a[end]]++;
            }
            if(unused[a[start-1]]>0)
                unused[a[start-1]]--;
            else
            {
                count--;
                avail[a[start-1]]++;
            }
            if(count>=k)
                ans++;
            start++;
            end++;
        }
        cout<<ans<<endl;
               
    }
}