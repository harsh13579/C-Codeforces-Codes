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
        int n,m,k,flag=0,flag2=0;
        cin>>n>>m>>k;
        vector<int>v1(n);
        vector<int>v2(m);
        set<int>set1,set2;
        for(auto &i:v1)
        {
            cin>>i;
            set1.insert(i);
        }
        for(auto &i:v2)
        {
            cin>>i;
            set2.insert(i);
        }
        bool ans=true;
        for(int i=1;i<=k;i++)
        {
            if(set1.count(i)<=0 && set2.count(i)<=0)
            {
                ans=false;
                break;
            }
        }
        int ff=0,fs=0,sf=0,ss=0;
        if(ans==true)
        {
            for(int i=0;i<=k;i++)
            {
                if(set1.count(i)>0)
                {
                    ff++;
                    if(set2.count(i)<=0)
                        fs++;
                }
                if(set2.count(i)>0)
                {
                    sf++;
                    if(set1.count(i)<=0)
                        ss++;
                }
            }
            if((ss+(sf-ss)>=k/2) && (fs+(ff-fs)>=k/2))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}