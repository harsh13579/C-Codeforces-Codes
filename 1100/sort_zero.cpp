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
        int m=n;
        vector<int>a(100001),b(100001);
        set<int>s;
		for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
		while(m>1 && a[m]>=a[m-1])
			m--;
        //cout<<"M:"<<m<<endl;
		for(int i=1;i<m;i++)
		{
			s.insert(a[i]);
            //cout<<"A[i]: "<<a[i]<<endl;
			m=max(b[a[i]],m);
            //cout<<"MAX M: "<<m<<endl;
		} 
		cout<<s.size()<<endl;
	}
}