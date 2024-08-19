#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,count_1=0,flag=0,flag2=0;
        cin>>r>>c;
        vector<string>v(r);
        for(int i=0;i<r;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(v[i][j]=='1')
                count_1++;
            }
        }
        //cout<<count_1<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                //cout<<"HII"<<endl;
                if(v[i][j]=='0')
                {
                    flag2=1;
                    if(i==0 && j==0)
                    {
                        if(v[i+1][j]=='0' || v[i+1][j+1]=='0' || v[i][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==0 && j==c-1)
                    {
                        if(v[i+1][j-1]=='0' || v[i+1][j]=='0' || v[i][j-1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==r-1 && j==0)
                    {
                        if(v[i-1][j]=='0' || v[i-1][j+1]=='0' || v[i][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==r-1 && j==c-1)
                    {
                        if(v[i-1][j]=='0' || v[i-1][j-1]=='0' || v[i][j-1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==0)
                    {
                        if(v[i+1][j]=='0' || v[i+1][j+1]=='0' || v[i+1][j-1]=='0' || v[i][j-1]=='0' || v[i][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(i==r-1)
                    {
                        if(v[i-1][j]=='0' || v[i-1][j-1]=='0' || v[i-1][j+1]=='0' || v[i][j-1]=='0'|| v[i][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(j==0)
                    {
                        if(v[i-1][j]=='0' || v[i-1][j+1]=='0' || v[i][j+1]=='0' || v[i+1][j]=='0'|| v[i+1][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else if(j==c-1)
                    {
                        if(v[i-1][j]=='0' || v[i+1][j]=='0' || v[i][j-1]=='0' || v[i+1][j-1]=='0'|| v[i-1][j-1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                    else 
                    {
                        if(v[i-1][j-1]=='0' || v[i-1][j]=='0' || v[i-1][j+1]=='0' || v[i][j-1]=='0'|| v[i][j+1]=='0'|| v[i+1][j-1]=='0' ||v[i+1][j]=='0' || v[i+1][j+1]=='0')
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag)
                break;
        }
        if(count_1==0)
            cout<<0<<endl;
        else if(!flag2)
            cout<<count_1-2<<endl;
        else if(flag)
            cout<<count_1<<endl;
        else
            cout<<count_1-1<<endl;
    }
}