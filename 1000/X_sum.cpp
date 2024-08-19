#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m],maxi=0;
         
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int count=0,a=i,b=j;
                while(a<n && b<m)
                {
                    count+=arr[a][b];
                    a++;
                    b++;
                }
                a=i,b=j;
                while(a>=0 && b<m)
                {
                    count+=arr[a][b];
                    a--;
                    b++;
                }
                a=i,b=j;
                while(a>=0 && b>=0)
                {
                    count+=arr[a][b];
                    a--;
                    b--;
                }
                a=i,b=j;
                while(b>=0 && a<n)
                {
                    count+=arr[a][b];
                    a++;
                    b--;
                }
                count-=(arr[i][j]*3);
                maxi=max(maxi,count);
            }
            
        }
        cout<<maxi<<endl;

    }
}