#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        string s;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                vector<int>sqr;
                sqr.push_back(v[i][j]-'a');
                sqr.push_back(v[j][n-i-1]-'a');
                sqr.push_back(v[n-i-1][n-j-1]-'a');
                sqr.push_back(v[n-j-1][i]-'a');
                sort(sqr.begin(),sqr.end());
                for(int k=0;k<3;k++)
                    sum+=sqr[3]-sqr[k];
            }
        }
        cout<<sum<<endl;
    }
    
}