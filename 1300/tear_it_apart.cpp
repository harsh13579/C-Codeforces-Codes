#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0,mini=INT_MAX,maxi=INT_MIN;
        for(char i='a';i<='z';i++)
        {
            count=0,maxi=0;
            for(int j=0;j<s.length();j++)
            {
                if(i!=s[j])
                {
                    count++;
                    if(count>maxi)
                        maxi=count;
                }
                else 
                    count=0;
            }
            if(maxi<mini)
                mini=maxi;
        }
        if(mini==0)
            cout<<0<<endl;
        else
        {
            count=0;
            while(mini!=1)
            {
                mini/=2;
                count++;
            }
            cout<<count+mini<<endl;
        }
    }
}