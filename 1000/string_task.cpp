#include<bits/stdc++.h>
using namespace std;    

int main()
{
    string s;
    cin>>s;
    vector<char>v;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            continue;
        }
        else
        {
            v.push_back('.');
            v.push_back(tolower(s[i]));
        }
    }
    for(auto ele:v)
    cout<<ele;
    cout<<"\n";

}