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
        vector<vector<int>>v(n,vector<int>(2));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
                cin>>v[i][j];
        }
        int low=0,high=1e9;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int flag=0;
            int leftk=0,rightk=mid;
            for(int i=0;i<n;i++)
            {
                if(rightk<v[i][0] || v[i][1]<leftk)
                {
                    flag=1;
                    break;
                }
                leftk=max(leftk,v[i][0]);
                rightk=min(rightk,v[i][1]);
                leftk=max(0,leftk-mid);
                rightk=rightk+mid;

            }
            if(flag==1)
                low=mid+1;
            else
                high=mid;
        }
        cout<<low<<endl;
    }
}