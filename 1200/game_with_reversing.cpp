#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string rev_s1=s1,rev_s2=s2;
        reverse(rev_s1.begin(),rev_s1.end());
        reverse(rev_s2.begin(),rev_s2.end());
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
                count1++;
        }
        for(int i=0;i<n;i++)
        {
            if(rev_s1[i]!=s2[i])
                count2++;
        }
        int ans1=2*count1-1;
        int ans2;
        if(count1<2)
        {
            cout<<count1<<endl;
            continue;
        }
        if(count2==0)
        {
            cout<<2<<endl;
            continue;
        }
        else
        {
            if(count1%2==0 && s1!=rev_s1)
                ans1++;
            ans2=2*count2-1;
            if((count2-1)%2==0 && s2!=rev_s2)
                ans2++;
            ans1=min(ans1,ans2);
        }
        cout<<ans1<<endl;
    }
}