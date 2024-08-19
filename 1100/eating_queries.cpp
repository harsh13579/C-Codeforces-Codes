#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    vector<int>a(n);
    for(auto &i : a)
    {
        cin>>i;
        sum+=i;
    }   
    cout<<sum<<endl; 
    

}
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         long long sum=0;
//         cin>>n>>q;
//         vector<int>a(n),q1(q),sum1;
//         for(auto &i : a)
//             cin>>i;
//         for(auto &i : q1)
//             cin>>i;
//         vector<int>::iterator upper1;
//         sort(a.begin(), a.end(),greater<int>());
//         for(auto ele:a)
//         {
//             sum+=ele;
//             sum1.push_back(sum);
//         }
//         // for(auto ele:sum1)
//         //     cout<<ele<<" ";
//         // cout<<endl;
//         int z;
//         for(auto ele:q1)
//         {
//             if(ele>sum1[sum1.size()-1])
//             {
//                 cout<<-1<<endl;
//                 continue;
//             }
//             // z=binsearch(sum1,ele,0,sum1.size()-1);
//             // if(z)
//             // {
//             //     cout<<z+1<<endl;
//             //     continue;
//             // }
//             // else
//             upper1=std::upper_bound(sum1.begin(),sum1.end(),ele);
//             z=upper1-sum1.begin();
//             if(upper1!=sum1.begin())
//             {
//                 if(*(upper1-1)==ele)
//                 cout<<z<<endl;
//                 else
//                 cout<<z+1<<endl;
//             }
//             else
//                 cout<<z+1<<endl;                  
//         }
//     }
// }

