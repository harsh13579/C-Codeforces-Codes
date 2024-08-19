#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long sum=0;
        vector<int>v(n),v1(m);
        for(int i=0; i<n; i++)
            cin>>v[i];
        for(int i=0; i<m; i++)
            cin>>v1[i];
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end(),greater<int>());
        int end=v.size()-1;
        int start=0;
        int start1=0;
        int end2=v1.size()-1;
        while(start<=end)
        {
            int ini_ini=abs(v[start]-v1[start1]);
            int ini_fin=abs(v[start]-v1[end2]);
            int fin_ini=abs(v[end]-v1[start1]);
            int fin_fin=abs(v[end]-v1[end2]);
            if(max(ini_ini,max(ini_fin,max(fin_ini,fin_fin)))==ini_ini)
            {
                sum+=ini_ini;
                start++;
                start1++;
            }
            else if(max(ini_ini,max(ini_fin,max(fin_ini,fin_fin)))==ini_fin)
            {
                sum+=ini_fin;
                start++;
                end2--;
            }
            else if(max(ini_ini,max(ini_fin,max(fin_ini,fin_fin)))==fin_ini)
            {
                sum+=fin_ini;
                start1++;
                end--;
            }
            else
            {
                sum+=fin_fin;
                end2--;
                end--;
            }
        }
        cout<<sum<<endl;
    }

}
