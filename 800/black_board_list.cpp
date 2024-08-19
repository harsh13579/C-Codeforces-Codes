#include <iostream>


using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n,flag=0,ans=0;
        cin>>n;
        int arr1[n];
        for(int i=0; i<n; i++)
        cin>>arr1[i];
        for (int i=0;i<n;i++)
        {
            if(arr1[i] <0)
                {
                    flag=arr1[i];
                    break;
                }
        }
        if(flag!=0)
        cout<<flag<<endl;
        else
        {
            for(int i=0;i<n;i++)
            ans=max(arr1[i],ans);
            cout<<ans<<endl;
        }
    }
    return 0;
}

