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
        char trump;
        cin>>trump;
        vector<string>C,D,H,S,trump_s;
        map<char,int>m;
        string inp;
        for(int i=0;i<2*n;i++)
        {
            cin>>inp;
            if(inp[1]=='C' && inp[1]!=trump)
                C.push_back(inp);
            else if(inp[1]=='D' && inp[1]!=trump)
                D.push_back(inp);
            else if(inp[1]=='H' && inp[1]!=trump)
                H.push_back(inp);
            else if(inp[1]=='S' && inp[1]!=trump)
                S.push_back(inp);
            else
                trump_s.push_back(inp);
            m[inp[1]]++;
        }
        //print_v(trump_s);
        int trumps=0,extra=0;
        for(auto ele:m)
        {
            if(ele.first==trump)
            {
                trumps=ele.second;
            }
            else 
            {
                extra+=(ele.second)%2;
            }
        }
        if((trumps<extra) || ((trumps-extra)&1))
            cout<<"IMPOSSIBLE"<<endl;
        else
        {
            sort(S.begin(),S.end());
            sort(C.begin(),C.end());
            sort(H.begin(),H.end());
            sort(D.begin(),D.end());
            sort(trump_s.begin(),trump_s.end());
            if(trump!='C' && C.size()>0)
            {
                if(C.size()&1)
                {
                    cout<<C[C.size()-1]<<" "<<trump_s[trump_s.size()-1]<<endl;
                    trump_s.pop_back();
                    C.pop_back();
                    for(int i=0;i+1<C.size();i++)
                    {
                        cout<<C[i]<<" "<<C[i+1]<<endl;
                        i++;
                    }
                }
                else
                {
                    for(int i=0;i+1<C.size();i++)
                    {
                        cout<<C[i]<<" "<<C[i+1]<<endl;
                        i++;
                    }
                }    
            }
            if(trump!='D' && D.size()>0)
            {
                if(D.size()&1)
                {
                    cout<<D[D.size()-1]<<" "<<trump_s[trump_s.size()-1]<<endl;
                    trump_s.pop_back();
                    D.pop_back();
                    for(int i=0;i+1<D.size();i++)
                    {
                        cout<<D[i]<<" "<<D[i+1]<<endl;
                        i++;
                    }
                }
                else
                {
                    for(int i=0;i+1<D.size();i++)
                    {
                        cout<<D[i]<<" "<<D[i+1]<<endl;
                        i++;
                    }
                }    
            }
            if(trump!='H' && H.size()>0)
            {
                if(H.size()&1)
                {
                    cout<<H[H.size()-1]<<" "<<trump_s[trump_s.size()-1]<<endl;
                    trump_s.pop_back();
                    H.pop_back();
                    for(int i=0;i+1<H.size();i++)
                    {
                        cout<<H[i]<<" "<<H[i+1]<<endl;
                        i++;
                    }
                }
                else
                {
                    for(int i=0;i+1<H.size();i++)
                    {
                        cout<<H[i]<<" "<<H[i+1]<<endl;
                        i++;
                    }
                }    
            }
            if(trump!='S' && S.size()>0)
            {
                if(S.size()&1)
                {
                    cout<<S[S.size()-1]<<" "<<trump_s[trump_s.size()-1]<<endl;
                    trump_s.pop_back();
                    S.pop_back();
                    for(int i=0;i+1<S.size();i++)
                    {
                        cout<<S[i]<<" "<<S[i+1]<<endl;
                        i++;
                    }
                }
                else
                {
                    for(int i=0;i+1<S.size();i++)
                    {
                        cout<<S[i]<<" "<<S[i+1]<<endl;
                        i++;
                    }
                }    
            }
            if(trump_s.size()>1)
            {
                for(int i=0;i+1<trump_s.size();i++)
                {
                    cout<<trump_s[i]<<" "<<trump_s[i+1]<<endl;
                    i++;
                }
            }
            
        }
    }
}