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
    map<int,int>res,power;
    power[0]=1;
    for(int i=1;i<30;i++)
        power[i]=power[i-1]*2;
    int q,t,x,flag=0;
    cin>>q;
    while(q--)
    {
        flag=0;
        cin>>t>>x;
        if(t==1)
        {
            res[power[x]]++;
        }
        else
        {
            if(x==0)
                cout<<"YES\n";
            else
            {
                // for(auto ele:res)
                //     cout<<"ELE: "<<ele.first<<" "<<ele.second<<endl;
                for(int i=29;i>=0;i--)
                {
                    if(res.find(power[i])!=res.end())
                    {
                        if(x>=(power[i]))
                        {
                            int quo=x/power[i];
                            //cout<<"QUO: "<<quo<<endl;
                            x-=min(quo,res[power[i]])*power[i];
                            //cout<<"X: "<<x<<endl;
                            if(x==0)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
                if(flag)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }
}