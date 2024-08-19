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
int find(int le,int ri,vector<int>& v)
{
    int res=0;
    for(int i=le;i<=ri;i++)
        res^=v[i];
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,f_dob=0;
        map<int,int>first;
        map<int,int>second;
        cin>>n>>k;
        vector<int>v(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>v[i];
            if(i<n)
                first[v[i]]++;
            else
                second[v[i]]++;
            if(first[v[i]]==2)
                f_dob++;
        }
        int f_sin=n-(2*f_dob);
        vector<int>ans1,ans2;
        int h=k;
        if(f_dob>=k)
        {
            for(auto ele:first)
            {
                if(ele.second==2)
                {
                    ans1.push_back(ele.first);
                    ans1.push_back(ele.first);
                    h--;
                }
                if(h==0)
                    break;
            }
            h=k;
            for(auto ele:second)
            {
                if(ele.second==2)
                {
                    ans2.push_back(ele.first);
                    ans2.push_back(ele.first);
                    h--;
                }
                if(h==0)
                    break;
            }
        }
        else if(f_dob<k)
        {
            h=2*k;
            for(auto ele:first)
            {
                if(ele.second==2)
                {
                    ans1.push_back(ele.first);
                    ans1.push_back(ele.first);
                }
            }
            for(auto ele:second)
            {
                if(ele.second==2)
                {
                    ans2.push_back(ele.first);
                    ans2.push_back(ele.first);
                    h-=2;
                }
            }
            for(auto ele:first)
            {
                if(ele.second==1)
                {
                    ans1.push_back(ele.first);
                    ans2.push_back(ele.first);
                    h--;
                }
                if(h==0)
                    break;
            }
        }
        for(auto i:ans1)
            cout<<i<<" ";
        cout<<"\n";
        for(auto i:ans2)
            cout<<i<<" ";
        cout<<"\n";
    }
}