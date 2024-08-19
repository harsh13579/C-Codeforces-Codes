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
        int arr[n];
        vector<pair<int,int>>arr1;
        for(int i=0; i<n; i++)
        cin>>arr[i];
        int target=n+1;
        for(int i=0; i<n; i++)
        {
            arr1.push_back(make_pair(arr[i],target-arr[i]));
        }
        for(int i=0; i<n; i++)
        cout<<arr1[i].second<<" ";
        cout<<endl;
    }
}