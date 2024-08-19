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
        int left_ind=s.size()-1,right_ind=0;
        for(int i=0; i<s.size();i++)
        {   
            if(s[i]=='0')
            {
                left_ind = i;
                break;
            }    
        }
        for(int i=s.size()-1; i>=0;i--)
        {   
            if(s[i]=='1')
            {
                right_ind = i;
                break;
            }    
        }
        cout<<abs(left_ind-right_ind)+1<<endl;
    }
}