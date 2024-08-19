#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     
        int n,x,count=0,count2=0;
        cin>>n;
        vector<int>neg;
        vector<int>pos;
        vector<int>ans_max;
        vector<int>ans_min;
        map<int,int>used;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x<0)
            neg.push_back(x);
            else
            pos.push_back(x);
        }
        sort(pos.begin(),pos.end());
        for(int i=0; i<pos.size(); i++)
        {
            used[pos[i]]++;
            count++;
            ans_max.push_back(count);
        }
        for(int i=0; i<neg.size(); i++)
        {
            int k=abs(neg[i]);
            if(used[k]>0)
            {
                count--;
                count2++;
                ans_max.push_back(count);
                ans_min.push_back(count2);
                count2--;
                ans_min.push_back(count2);
                used[k]--;
            }
            else
            continue;
        }
        for(int i=0; i<pos.size(); i++)
        {
            if(used[pos[i]]!=0)
            {
                count2++;
                ans_min.push_back(count2);
            }
        }

        for(int i=0; i<ans_max.size(); i++)
        cout<<ans_max[i]<<" ";
        cout<<"\n";
        for(auto ele:ans_min)
        cout<<ele<<" ";
        cout<<"\n";
    }
}