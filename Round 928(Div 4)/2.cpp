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
        int n,flag=0;
        cin>>n;
        map<int,int>m;
        int sum=0,flag1=0,flag2=0,start=0;
        vector<vector<char>>v(n,vector<char>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v[i][j];
                if(v[i][j]=='1')
                {
                    sum++;
                }
                m[i]=sum;
            }
            sum=0;
        }
        int final=0;
        for(auto ele:m)
        {
            if(ele.second>0)
            {
            final=ele.second;
            break;
            }
        }
        for(auto ele:m)
        {
            if(ele.second>0)
        {
            if(ele.second!=final)
            {
                cout<<"TRIANGLE"<<endl;
                flag=1;
                break;
            }
        }
        }        
        if(!flag)
            cout<<"SQUARE"<<endl;
    }
}