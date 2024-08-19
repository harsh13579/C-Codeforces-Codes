#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,maxi=0,value;
        cin>>n;
        map<int,int>m1;
        map<int,int>m2;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        if(n==1 && a[0]==b[0])
        {
            cout<<2<<endl;
            continue;
        }
        int i=0;
        while(i < n ){
			value = a[i];
			count = 0;
			while(i < n && a[i] == value)
            {
				count++;
				i++;
			}
			m1[value] = max(m1[value], count);
		}
		i=0;
		while(i < n ){
			value = b[i];
			count = 0;
			while(i<n && b[i] == value)
            {
				count++;
				i++;
			}
			m2[value] = max(m2[value], count);
		}
        //for(auto ele:m1)
        //cout<<ele.first<<" "<<ele.second<<endl;
        //for(auto ele:m2)
        //cout<<ele.first<<" "<<ele.second<<endl;
        for(auto ele:m1)
        {
            int res=ele.first;
            int count_a=ele.second;
            int count_b=m2[ele.first];
            maxi=max(count_a+count_b,maxi);
        }
        for(auto ele:m2)
        {
            int res=ele.first;
            int count_b=ele.second;
            int count_a=m1[ele.first];
            maxi=max(count_a+count_b,maxi);
        }
        cout<<maxi<<"\n";
    }
}