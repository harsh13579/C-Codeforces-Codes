#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,s1_flag=0,s2_flag=0;
        cin>>n;
        vector<string> v(n);
        vector<int> ans;
        map<string,int>dp;
        for(auto &i:v)
        {
            cin>>i;
            dp[i]=1;
        }
        for(int i=0; i<n; i++)
        {
            string s1="";
            string s2=v[i];
            for(int j=0; j<v[i].size()-1; j++)
            {
                s1+=v[i][j];
                s2.erase(0,1);
                if(dp[s1]==1)
                    s1_flag=1;
                  
                if(dp[s2]==1)
                    s2_flag=1;
                
                if(s1_flag==1 &&  s2_flag==1)
                {
                    ans.push_back(1);
                    flag=1;
                    break;
                }
                s1_flag=0;
                s2_flag=0;
            }
            if(flag!=1)
                ans.push_back(0);
            else
                flag=0;
            
            s1_flag=0;
            s2_flag=0;

        }
        for(auto ele:ans)
            cout<<ele;
        cout<<"\n";
    }
}