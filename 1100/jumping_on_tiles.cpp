#include<bits/stdc++.h>
using namespace std;
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.first>b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long sum=0;
        vector<pair<int,int>>alpha;
        vector<pair<int,int>>ans;
        for(int i=0;i<s.size();i++)
        {
            alpha.push_back(make_pair(s[i]-96,i+1));
        }
        int x,y;
        x=alpha[0].first;
        // for(auto ele:alpha)
        //      cout<<ele<<" ";
        if(alpha[0].first<alpha[alpha.size()-1].first)
        {
            sort(alpha.begin()+1,alpha.end()-1);
            for(int i=1;i<alpha.size()-1;i++)
            {
                if(alpha[i].first>=alpha[0].first && alpha[i].first<=alpha[alpha.size()-1].first)
                {
                    y=alpha[i].first;
                    sum+=abs(y-x);
                    ans.push_back(make_pair(alpha[i].first,alpha[i].second));
                    x=alpha[i].first;
                }

            }
        }
        else
        {
            sort(alpha.begin()+1,alpha.end()-1,myComparison);
            // for(auto ele:alpha)
            //     cout<<"Sorted: "<<ele.first<<" ";
            // cout<<"\n";
            for(int i=1;i<alpha.size()-1;i++)
            {
                if(alpha[i].first<=alpha[0].first && alpha[i].first>=alpha[alpha.size()-1].first)
                {
                    y=alpha[i].first;
                    sum+=abs(y-x);
                    ans.push_back(make_pair(alpha[i].first,alpha[i].second));
                    x=alpha[i].first;
                }

            }  
            // for(auto ele:ans)
            //     cout<<"ANS: "<<ele.first<<" "<<ele.second;
            // cout<<"\n";          
        }
        sum+=abs(alpha[alpha.size()-1].first-x);
        //sort(ans.begin(), ans.end());
        cout<<sum<<" "<<ans.size()+2<<endl;
        cout<<alpha[0].second<<" ";
        for(auto ele:ans)
            cout<<ele.second<<" ";
        cout<<alpha[alpha.size()-1].second<<" ";
        cout<<"\n";
    }
}