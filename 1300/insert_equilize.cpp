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
        int n,x;
        cin>>n;
        ll ans=0;
        set<int>s;
        //vector<int>v(n);
        int maxim = INT_MIN;
        int minim = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
            maxim = max(maxim,x);
            minim = min(minim,x);
        }
        int g;
        if(n>1)
        {
            g = maxim-minim;
            for(auto ele:s)
            {
                if(ele != maxim)
                    g = __gcd(g,maxim-ele);
            }
            int got = 1e5;
            for(int i=1;i<n;i++)
            {
                if(s.find(maxim-(g*i))==s.end())
                {
                    got=maxim-(g*i);
                    break;
                }
            }
            // cout<<"G:"<<g<<endl;
            // cout<<"GOT:"<<got<<endl;
            if(got!=1e5)
            {
                for(auto ele:s)
                {
                    ans += abs(maxim-ele)/g;
                }
                ans+=abs(maxim-got)/g;
            }
            else{
                for(auto ele:s)
                {
                    ans += abs(maxim-ele)/g;
                }
                ans+=n;
            }
        }
        else
            ans=1;
        cout<<ans<<"\n";
    }
}