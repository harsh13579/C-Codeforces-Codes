#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,index1=0,index2=0,x,count=1,flag1=0;
        long long sum=0;
        cin>>n;
        vector<int>v(n),ans;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i>0)
            {
                if(v[i]==v[i-1])
                {
                    count++;
                }
                else if(count>1)
                {
                    ans.push_back(count);
                    count=1;
                }
            }
        }
        if(count>1)
            ans.push_back(count);

        int start=0,end=1;
        if(n<=2 || ans.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        else if(ans.size()==1)
        {
            if(ans[0]==2)
            cout<<0<<endl;
            else if(ans[0]==3)
            cout<<1<<endl;
            else
            cout<<ans[0]-3<<endl;
        }
        else
        {
            while(end<n)
            {
                if(v[start]==v[end])
                {
                    end++;
                    if(flag1==0)
                    {
                        index1=end;
                        flag1=1;
                    }
                    index2=end-1;
                    // if(flag2)
                    //     flag3=1;
                }
                else
                {
                    // if(flag4)
                    //     flag2=1;
                    start=end;
                    end++;
                }
            }
            cout<<index2-index1<<endl;
        }
    }
}