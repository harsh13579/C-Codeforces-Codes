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
        vector<int>a1(n),a2(n);
        int flag=0,start=0,end=n-1,flag2=0;
        for(int i=0;i<n;i++)
            cin>>a1[i];
        for(int i=0;i<n;i++)
            cin>>a2[i];

        while(1)
        {
            if(a1[start]==a2[start] )
            {
                start++;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            if(a1[end]==a2[end] )
            {
                end--;
            }
            else
            {
                break;
            }
        }
        //cout<<start<<" "<<end<<endl;
        int q=start;
        int w=end;
        while(q-1>=0)
        {
            if(a1[start-1]<=min(a1[start],a2[start]))
            {
                start--;
            }
            q--;
        }
        while(w+1<n)
        {
            if(a1[end+1]>=max(a1[end],a2[end]))
            {
                end++;
            }
            w++;
        }
        cout<<start+1<<" "<<end+1<<endl;
    }
}