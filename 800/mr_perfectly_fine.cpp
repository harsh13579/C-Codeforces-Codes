#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum1=0,sum=0,flag1=0,flag2=0,flag3=0;
        cin>>n;
        
        string arr[n*2];
        for(int i=0; i<n*2; i++)
        cin>>arr[i];
        int visited[3];
        
        vector<pair<int,string>>pair1;
        int i=0;
        int a=n*2;
        while(a)
        {
            pair1.push_back(make_pair(stoi(arr[i]),arr[i+1]));
            a-=2;
            i+=2;

        }
        sort(pair1.begin(),pair1.end());
        for(int i=0; i<3; i++)
        visited[i] = false;
        for(int i=0; i<pair1.size(); i++)
        {
            if(pair1[i].second=="11")
                {
                    if(visited[0]==false)
                    {
                        visited[0] = true;
                        sum1=pair1[i].first;
                        flag3=1;
                    }
                }
            else if(pair1[i].second=="01")
                {
                    if(visited[1]==false)
                        {
                            visited[1]=true;
                            sum=sum+pair1[i].first;
                            flag1=1;
                        }
                    else
                    continue;       
                }
            else if(pair1[i].second=="10")
            {
                if(visited[2]==false)
                {
                    visited[2]=true;
                    sum=sum+pair1[i].first;
                    flag2=1;
                }
                else
                continue;
            }
            else
            continue;
        }
        if( flag1==1 && flag2==1 && flag3==1)
        {
            cout<<min(sum,sum1)<<endl;
        }
        else if((flag1!=1 || flag2!=1 )&& flag3!=1)
        {
            
            sum=-1;
            cout<<sum<<endl;
            
        }
        else if(flag1==1 && flag2==1 && flag3!=1)
            cout<<sum<<endl;
        else if((flag1!=1 || flag2!=1) && flag3==1 )
        {   
            cout<<sum1<<endl;
        }
       

    }
    
}