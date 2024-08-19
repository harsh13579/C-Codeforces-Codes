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
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        if(n==1 && m==1)
        {
            cout<<v[0][0]<<endl;
        }
        else
        {
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    int mini=INT_MAX,left=INT_MIN,right=INT_MIN,up=INT_MIN,down=INT_MIN;
                    if(i>0)
                    {
                        up=max(up,v[i-1][j]);
                    }
                    if(i<n-1)
                    {
                        down=max(down,v[i+1][j]);
                    }    
                    if(j>0)
                    {
                        left=max(left,v[i][j-1]);
                    }
                    if(j<m-1)
                        right=max(right,v[i][j+1]);
                    int maxi=max(left,max(right,max(up,down)));
                    if(maxi<v[i][j])
                    {
                        v[i][j]=maxi;
                    }
                }
            }

             for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        


    }
}