#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,ans=0;
		cin>>a>>b;
		a=abs(a);
		b=abs(b);
		if(a==b)
		ans=2*a;
		else
		ans=2*(min(a,b))+2*(abs(a-b))-1;
		cout<<ans<<endl;
	}
}