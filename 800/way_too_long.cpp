#include<iostream>
#include<string.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    string str1[t],str_res[t];
    for(int i=0; i<t; i++)
    {
        cin>>str1[i];
    }
    for(int i=0;i<t;i++)
    {
        if(str1[i].size() > 10)
        {
            string sizz= to_string(str1[i].size()-2);
            str_res[i] = str1[i][0]+sizz+str1[i][str1[i].size()-1];
        }
        else
        {
            str_res[i] = str1[i];
        }
    }
    for(int i=0;i<t;i++)
    cout<<str_res[i]<<endl;
    
}