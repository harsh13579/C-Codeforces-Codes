#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,smallest_odd,even_counter=0,odd_counter=0;
        cin>>n;
        int arr1[n],arr1cpy[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        sort(arr1,arr1+n);
        for(int i=0;i<n;i++)
        {
            if(arr1[i]%2!=0)
            {
                smallest_odd=arr1[i];
                break;
            }
        }
        //cout<<smallest_odd<<endl;
        for(int i=0;i<n;i++)
        {
            if(arr1[i]%2==0)
            {
                even_counter++;
            }
            else
            {
                if(arr1[i]>smallest_odd)
                even_counter++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr1[i]%2!=0)
            {
                odd_counter++;
            }
            else
            {
                if(arr1[i]>smallest_odd)
                odd_counter++;
            }
        }
        //cout<<odd_counter<<" "<<even_counter<<" \n";
        if(even_counter==n || odd_counter==n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}