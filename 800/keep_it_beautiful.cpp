#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int s[n];
        for(int i=0; i<n; i++)
        cin>>s[i];
        vector<char> v;
        v.push_back('1');
        int i=1;
        while(i!=n)
        {   
            if(s[i]>=s[i-(count+1)])
            {
                count=0;
                v.push_back('1');
            }
            else
            {
                if(s[i]<=s[0])
                {
                    v.push_back('1');
                    i++;
                    break;
                }
                else
                {
                    v.push_back('0');
                    count++;
                }
            }
            i++;
        }
        //cout<<i<<endl; 
        count=0;
        for(int a=i; a<n; a++)
        {
            if(s[a]<=s[0] && s[a]>=s[a-(count+1)])
            {
                v.push_back('1');
                count=0;
            }
            else
            {
                count++;
                v.push_back('0');
            }
        }
        for(auto ele:v)
        cout<<ele;
        cout<<endl;
    }
}