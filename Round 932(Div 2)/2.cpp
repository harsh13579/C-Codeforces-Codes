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
        vector<int>v(n);
        set<int>s1,s2;
        int arr[100001]={0};
        int count_0=0;
        for(auto &i:v)
        {
            cin>>i;
            arr[i]++;
            if(i==0)
                count_0++;
        }
        if(count_0==0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<n/2<<endl;
            cout<<n/2+1<<" "<<n<<endl;
        }
        else if(count_0==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            //cout<<"HI"<<endl;
            int i=0;
            for(i=0;i<=100000;i++)
            {
                if(arr[i]<2)
                    break;
                s1.insert(i);
                s2.insert(i);    
            }
            if(arr[i]==1)
                cout<<-1<<endl;
            else
            {
                int index=0;
                for(int i=0;i<n;i++)
                {
                    if(s1.find(v[i])!=s1.end())
                    {
                        s1.erase(v[i]);
                    }
                    if(s1.size()==0)
                    {
                        index=i+1;
                        break;
                    }
                }
                for(int i=index;i<n;i++)
                {
                    if(s2.find(v[i])!=s2.end())
                    {
                        s2.erase(v[i]);
                    }
                }
                if(s2.size()==0)
                {
                    cout<<2<<endl;
                    cout<<1<<" "<<index<<endl;
                    cout<<index+1<<" "<<n<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
    }
}