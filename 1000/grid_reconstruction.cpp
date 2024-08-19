#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long arr[2*n];

        long long maxi=2*n;
        long long mini=1;
        arr[0]=maxi--;
        arr[1]=mini++;
        arr[(2*n)-2]=mini++;
        arr[(2*n)-1]=maxi--;
        for(int i=2; i<n; i++)
        {
            if(i%2!=0)
            arr[i]=(mini++);
            else
            arr[i]=(maxi--);
        }
        for(int i=n;i<2*n;i++)
        {
            if(i%2!=0)
            arr[i]=(maxi--);
            else
            arr[i]=(mini++);
        }
        for(int i=0;i<2*n;i++)
        {
            cout<<arr[i]<<" ";
            if((i+1)==n)
            cout<<"\n";
        }
        cout<<endl;
    }
    
}