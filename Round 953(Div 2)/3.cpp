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
        ll n,k,sum=0;
        cin>>n>>k;
        if(k&1)
            cout<<"No"<<endl;
        else
        {
            int j=1;
            for(int i=n;i>0;i--)
            {
                sum+=abs(i-j);
                j++;
            }
            //cout<<sum<<endl;
            if(k>sum)
                cout<<"No"<<endl;
            else if(sum==k)
            {
                cout<<"YES"<<endl;
                while(n!=0)
                {
                    cout<<n<<" ";
                    n--;
                }
                cout<<endl;

            }
            else 
            {
                cout<<"YES"<<endl;
                vector<int>ans(n);
                for(int i=0;i<n;i++)
                    ans[i]=i+1;
                int i=0,r=n;
                for(i=0;i<n;i++)
                {
                    if(k>((r-1)<<1))
                    {
                        swap(ans[i],ans[n-(i+1)]);
                        k-=(r-1)*2;
                        r-=2;
                    }
                    else
                    {
                        break;
                    }
                }
                k/=2;
                swap(ans[i+k],ans[i]);
                for(auto ele:ans)
                    cout<<ele<<" ";
                cout<<endl;
            }
        }
    }
}