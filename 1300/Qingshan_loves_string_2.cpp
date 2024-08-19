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
        vector<int>v;
        string s;
        cin>>s;
        string str1="01";
        int start=0;
        int end=s.size()-1;
        while(start<=end)
        {
            //cout<<"HII"<<endl;
            if((s[start]==s[end]) && s[start]=='0')
            {
                s.insert(end+1,str1);
                v.push_back(end+1);
                end+=2;
                count++;
                //cout<<"HII"<<endl;
            }
            else if((s[start]==s[end]) && s[start]=='1')
            {
                s.insert(start,str1);
                v.push_back(start);
                end+=2;
                count++;
            }
            else
            {
                start++;
                end--;
            }
            if(count>300)
                break;
        }
        if(count<=300)
        {
            cout<<v.size()<<endl;
            for(auto i:v)
                cout<<i<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;

    }
}