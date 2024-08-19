#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans1,ans2,ans3;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==n)
                ans3=i+1;
            if(arr[i]==1)
                ans1=i+1;
            if(arr[i]==2)
                ans2=i+1;
        }    
        //cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;    
        if((ans1<ans2 && ans2<ans3) || (ans3<ans2 && ans2<ans1))
            cout<<ans2<<" "<<ans3<<endl;
        else if((ans2<ans1 && ans1<ans3) || (ans3<ans1 && ans1<ans2))
            cout<<ans1<<" "<<ans3<<endl;
        else
            cout<<2<<" "<<2<<endl;
    }
}