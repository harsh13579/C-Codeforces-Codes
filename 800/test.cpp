#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x,sum=0,sum_motu=0,sum_tomu=0;
	    cin>>n>>k;
	    vector<int>motu;
	    vector<int>tomu;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>x;
	        if(i%2!=0)
	        {
                motu.push_back(x);
                sum_motu+=x;
            }
	        else
	        {
                tomu.push_back(x);
                sum_tomu+=x;
            }
	    }
	    sort(motu.begin(),motu.end());
	    sort(tomu.begin(),tomu.end());
	    int a=0,b=motu.size()-1;
	    while(a<tomu.size() && b>=0 && k>0)
	    {
	        if(motu[b]-tomu[a]>=0)
            sum+=motu[b]-tomu[a];

            a++; b--; k--;
	    }
	    if(sum+sum_tomu>sum_motu-sum)
	    cout<<"YES"<<endl;
        else
        cout<<"NO\n";
	}
	return 0;
}
