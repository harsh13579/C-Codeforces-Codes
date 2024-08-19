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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<int,int>count;
        vector<int>v(m);
        for(auto &i:v)
        {
            cin>>i;
            count[i]++;
        }
        string s1;
        cin>>s1;
        long long excess=0;
        sort(s1.begin(),s1.end());
        for(auto ele:count)
            excess+=(ele.second-1);
        int s1_size=s1.size()-1;
        while(excess)
        {
            s1.erase(s1_size);
            s1_size--;
            excess--;
        }
        int j=0;
        for(auto ele:count)
        {
            s[ele.first-1]=s1[j];
            j=j+1;
        }
        cout<<s<<endl;
    }
}