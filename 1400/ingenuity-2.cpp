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
        int n,x=0,y=0;
        cin>>n;
        string s,ans="";
        cin>>s;
        if(n&1)
            cout<<"NO"<<endl;
        else if(n==2)
        {
            if(s[0]==s[1])
                cout<<"RH"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            for(auto c:s)
            {
                if(c=='N')
                    y++;
                else if(c=='S')
                    y--;
                else if(c=='E')
                    x++;
                else
                    x--;
            }
            if(y&1 || x&1)
                cout<<"NO"<<endl;
            else
            {
                int north=0,south=0,east=1,west=1;
                for(auto c:s)
                {
                    if(c=='N')
                    {
                        if(north==0)
                        {
                            ans+='R';
                            north=1;
                        }
                        else if(north==1)
                        {
                            ans+='H';
                            north=0;
                        }
                    }
                    else if(c=='S')
                    {
                        if(south==0)
                        {
                            ans+='R';
                            south=1;
                        }
                        else if(south==1)
                        {
                            ans+='H';
                            south=0;
                        }  
                    }
                    else if(c=='E')
                    {
                        if(east==0)
                        {
                            ans+='R';
                            east=1;
                        }
                        else if(east==1)
                        {
                            ans+='H';
                            east=0;
                        }  
                    }
                    else if(c=='W')
                    {
                        if(west==0)
                        {
                            ans+='R';
                            west=1;
                        }
                        else if(west==1)
                        {
                            ans+='H';
                            west=0;
                        }  
                    }
                }
                cout<<ans<<endl;
            }

        }
    }
}