#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans,count=0,result;
        cin>>n>>k;
        int per[n],sorted[n];
        for (int i=0; i<n; i++)
        {
            cin>>per[i];
            sorted[i] = per[i];
        }
        sort(sorted,sorted+n);
        vector <pair<int,int>>bucket;
        vector <pair<int,int>>sorted_bucket;
        vector <pair<int,int>>bucket_cpy;
        for(int i=0;i<n;i++)
        {
            ans= i%k;
            bucket.push_back(make_pair(per[i],ans));
            sorted_bucket.push_back(make_pair(sorted[i],ans));
            bucket_cpy.push_back(make_pair(ans,per[i]));
        }
        //sort(bucket_cpy.begin(),bucket_cpy.end());
        for(int i=0;i<n;i++)
        {
            if(bucket[i].second != sorted_bucket[bucket_cpy[i].second-1].second)
            count++;
        }
        if(count==0)
        result =0;
        else if(count==2)
        result=1;
        else
        result=-1;

        cout<<result<<endl; 
    }

}