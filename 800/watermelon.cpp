#include<iostream>
using namespace std;
int main()
{
    int w;
    std::cin>>w;
    if(w%2==0 && w!=2)
    {
        std::cout<<"YES"<<endl;
    }
    else
    std::cout<<"NO"<<endl;
    return 0;
}