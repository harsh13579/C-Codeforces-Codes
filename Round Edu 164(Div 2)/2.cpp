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
        map<int,int>m;
        int n,maxi=0,num=0,flag=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
            maxi=max(m[v[i]],maxi);
        }
        for(auto ele:m)
        {
            if(ele.second==maxi)
            {
                num=ele.first;
                break;
            }
        }
        long long ans=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==num) 
                ans++;
            else
            {
                if(flag==0)
                {
                    res=ans;
                    flag=1;
                }
                else
                    res=min(ans,res);
                ans=0;
            }
        }
        res=min(ans,res);
        if(m.size()==1)
            cout<<-1<<endl;
        else
            cout<<res<<endl;
    }
}