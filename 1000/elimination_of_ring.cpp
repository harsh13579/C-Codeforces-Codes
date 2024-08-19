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
        vector<int>a(n);
        map<int,int>b;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int q=b[a[0]];
        for(int i=1;i<n;i++)
        {
            if(b[a[i]]!=q || b[a[i]]==1 || b.size()>2)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        cout<<n<<endl;

        else
        cout<<n/2+1<<endl;

    }
}