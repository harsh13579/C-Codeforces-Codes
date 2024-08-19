#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    scanf("%d", &t);
    while(t--)
    {
        int l,h;
        cin>>l>>h;

        int maxl=0,res=l;
        for(int i=l;i<=h;i++)
        {
            string number=to_string(i);
            sort(number.begin(),number.end());
            int diff=number[number.length()-1]-number[0];
            if (diff > maxl)
            {
                maxl=diff;
                res=i;
            }
            if (maxl == 9)
                break;
        }
        cout<<res<<"\n";
    }
}