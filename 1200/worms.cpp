#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    long long suma=0;
    cin>>n;
    vector<int> v(n),sum;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        suma+=v[i];
        sum.push_back(suma);
    } 
    cin>>m;
    int a;
    for(int i=0; i<m; i++)
    {
        cin>>a;
        vector<int>::iterator low;
        low=lower_bound(sum.begin(),sum.end(),a);
        cout<<low-sum.begin()+1<<endl;
    }
}