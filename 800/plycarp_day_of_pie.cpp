#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string pi="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        string s;
        cin>>s;
        long long i;
        for(i=0; i<s.length(); i++)
        {
            if(s[i] != pi[i])
            break;
        }
        cout<<i<<endl;

    }

}