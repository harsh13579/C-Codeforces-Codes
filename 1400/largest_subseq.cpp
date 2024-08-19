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
        vector<pair<char,int>>lex_lar;
        for(int i=0;i<n;i++)
        {
            while(!lex_lar.empty() && (s[i]>lex_lar.back().first))
                lex_lar.pop_back();
            lex_lar.push_back(make_pair(s[i],i));
        }   
        // for(auto elem : lex_lar)
        //     cout<<elem.first<<" "<<elem.second<<endl;
        int size=lex_lar.size(),dup=0;
        for(int i=0;i<size;i++)
        {
            if(lex_lar[i].first==lex_lar[0].first)
                dup++;
        } 
        //cout<<dup<<endl;
        int low=0;
        int x=size;
        while(x--)
        {
            s[lex_lar[size-1].second]=lex_lar[low].first;
            size--;
            low++;
        }
        //cout<<s<<endl;
        if(is_sorted(s.begin(),s.end()))
            cout<<lex_lar.size()-dup<<endl;
        else
            cout<<-1<<endl;

    }
}