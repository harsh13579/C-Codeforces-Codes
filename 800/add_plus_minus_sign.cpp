#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        char t;
        string s;
        cin>>s;
        vector<char> v;
        if(s[0]=='1')
        sum=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(sum>0)
                {
                    v.push_back('-');
                    sum--;
                }
                else
                {
                    v.push_back('+');
                    sum++;
                }
            }
            else
            v.push_back('+');
        }
        for(auto ele:v)
        cout<<ele;
        cout<<endl;
    }
}