#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n;
        cin>>n;
        long long count = 0;
        string curr_hr="";
        curr_hr+=(s[0]);
        curr_hr+=(s[1]);
        string curr_min="";
        curr_min+=(s[3]);
        curr_min+=(s[4]);
        int n_hr=n/60;
        int n_min=n%60;
        int tot=0;
        while(1)
        {
            if(stoi(curr_hr)+n_hr<=9)
            {
                string z="";
                z+="0";
                z+=to_string(stoi(curr_hr)+n_hr);
                curr_hr=z;
                //cout<<"Z hr: "<<z<<endl;
            }
            else
            {
                string z="";
                z+=(to_string(stoi(curr_hr)+n_hr));
                curr_hr=z;
                //cout<<"Z hr: "<<z<<endl;
            }
            if(stoi(curr_min)+n_min<=9)
            {
                string z="";
                z+="0";
                z+=(to_string(stoi(curr_min)+n_min));
                curr_min=z;
                //cout<<"Z min:"<<z<<endl;
            }
            else
            {
                string z="";
                z+=(to_string(stoi(curr_min)+n_min));
                curr_min=z;
                //cout<<"Z min:"<<z<<endl;
            }
            if(stoi(curr_min)>=60)
            {
                curr_min=to_string(stoi(curr_min)%60);
                
                if(stoi(curr_min)<=9)
                {
                    string k="0";
                    k+=curr_min;
                    curr_min=k;
                }
                //cout<<"CURR_min:"<<curr_min<<endl;
                if(stoi(curr_hr)+1<=9)
                {
                    string z="";
                    z+="0";
                    z+=(to_string(stoi(curr_hr)+1));
                    curr_hr=z;
                    //cout<<"Z(hr):"<<z<<endl;
                }
                else
                {
                    string z="";
                    z+=(to_string(stoi(curr_hr)+1));
                    curr_hr=z;
                   // cout<<"Z(hr):"<<z<<endl;
                }
            }
            if(stoi(curr_hr)>=24)
            {
                curr_hr=to_string(stoi(curr_hr)%24);
                
                if(stoi(curr_hr)<=9)
                {
                    string k="0";
                    k+=curr_hr;
                    curr_hr=k;
                }
                //cout<<"CURR_hr: "<<curr_hr<<endl;
            }
            string reve_min=curr_min;
            //cout<<"Curr_hr: "<<curr_hr<<" Curr_min: "<<curr_min<<endl;
            std::reverse(reve_min.begin(),reve_min.end());
            if(curr_hr==reve_min)
            {
                //cout<<curr_hr<<" "<<curr_min<<endl;
                count++;
                //cout<<"COUNT: "<<count<<endl;
            }
            tot+=n;
            //cout<<endl;
            if(tot%1440==0)
                break;
        }
        cout<<count<<endl;
    }
}