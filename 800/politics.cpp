#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int count=n;
        int visited[n];
        string str[n];
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
            visited[i]=false;
        }
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=0; i<k; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(str[0][i] == '+')
                {
                    if(str[j][i] != '+')
                    {
                        if(visited[j]==false)
                        {
                            count--;
                            //cout<<"Count: "<<count<<endl;
                            visited[j]=true;
                        }
                    }
                    else
                    continue;
                }
                else
                {
                    if(str[j][i] != '-')
                    {
                        if(visited[j]==false)
                        {
                            count--;
                            visited[j]=true;
                        }
                    }
                    else
                    continue;
                }
            }
        }
        cout<<count<<endl;
    }
}