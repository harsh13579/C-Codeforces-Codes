#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) 
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i+1;j<matrix.size();j++)
        {
            if(i!=j)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix.size()/2;j++)
        {
            swap(matrix[i][j],matrix[i][matrix.size()-j-1]);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,res=0;
        char c;
        cin>>n;
        vector<vector<int>>v1(n,vector<int>(n)),v2(n,vector<int>(n)),v3(n,vector<int>(n)),v4(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>c;
                v1[i][j]=c-'0';
            }
        }
        v2=v1;
        rotate(v2);
        v3=v2;
        rotate(v3);
        v4=v3;
        rotate(v4);
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int count_1=0,count_0=0;
                if(v1[i][j]==0)
                    count_0++;
                else
                    count_1++;
                if(v2[i][j]==0)
                    count_0++;
                else
                    count_1++;
                if(v3[i][j]==0)
                    count_0++;
                else
                    count_1++;
                if(v4[i][j]==0)
                    count_0++;
                else
                    count_1++;
                res+=min(count_0,count_1);
            }   
        }
        cout<<res<<endl;
    }
}