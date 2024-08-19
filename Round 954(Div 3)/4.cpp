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
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                count++;
        }
        if(n==2 || n==1)
            cout<<stoi(s)<<endl;
        else if(n==3 && s[1]=='0' && count==1)
        {
            cout<<min((s[0]-'0')*(s[2]-'0'),(s[0]-'0')+(s[2]-'0'))<<endl;
        }
        else if(n==3 && count==1)
            cout<<0<<endl;
        else if(count>=1 && n>2)
            cout<<0<<endl;
        else if(count==0 && n>2)
        {
            ll mini=INT_MAX;
            for(int i=0;i+1<n;i++)
            {
                ll sum=0;
                sum+=(s[i]-'0')*10+(s[i+1]-'0');
                //cout<<sum<<endl;
                for(int j=0;j<n;j++)
                {
                    if(j==i)
                    {
                        j++;
                    }
                    else if(s[j]=='1')
                        sum*=1;
                    else    
                    {
                        int x=sum*(s[j]-'0');
                        //cout<<"X"<<x<<endl;
                        int y=sum+(s[j]-'0');
                        sum=min(x,y);
                        //cout<<"SUM:"<<sum<<endl;
                    }
                }
                mini=min(mini,sum);
            }
            cout<<mini<<endl;
        }
    }
}