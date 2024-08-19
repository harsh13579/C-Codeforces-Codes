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
        int per[n],sorted_per[n],res[n];
        for (int i=0; i<n; i++)
        {
            cin>>per[i];
            sorted_per[i] = per[i];
        }        
        vector <pair<int,int> >per_pair;
        for(int i=0; i<n; i++)
        per_pair.push_back(make_pair(per[i],i));
        sort(sorted_per,sorted_per+n);
        vector <int> sorted_per1;
        for(int i=0; i<n; i++)
        sorted_per1.push_back(sorted_per[i]);
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if (per[i] == sorted_per[j])
                {
                    res[i]=abs(per_pair[i].second-j);
                    break;
                }
            }
        }*/
        for(int i=0; i<n; i++)
        {
            int j=upper_bound(sorted_per1.begin(), sorted_per1.end(), per[i]) - sorted_per1.begin();
            //cout<<j-1<<" ";
            res[i]=abs(per_pair[i].second-(j-1));
            //cout<<res[i]<<" ";
        }
        int ans =  __gcd(res[0],res[1]);

        for(int i=2; i<n; i++)
        {
            ans = __gcd(ans,res[i]);
        }
        cout<< ans << "\n";
    }
}