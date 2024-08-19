#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                a=i+j;
                b=sqrt(a);
                if(a==b*b)
                {
                    int start=j,end=i;
                    while(start<=end)
                    {
                        ans[end]=start;
                        ans[start]=end;
                        start++;
                        end--;
                    }
                    i=j;
                    break;
                }
            }
        }
        for(auto ele:ans)
            cout<<ele<<" ";
        cout<<"\n";
    }
}