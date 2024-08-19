#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int>count;
        string s;
        int maxi=0;
        cin>>s;
        for(int i=0; i<s.size();i++)
        {
            count[s[i]]++;
        }
        for(auto it:count)
        {
            maxi=max(maxi,it.second);
        }
        //cout<<maxi<<endl;
        if(maxi==4)
        cout<<-1<<endl;
        else if(maxi==1 || maxi==2)
        cout<<4<<endl;
        else if(maxi==3)
        cout<<6<<endl;

    }
}