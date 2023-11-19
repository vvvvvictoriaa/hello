#include <iostream>
#include <cstring> 
using namespace std;
int main()
{
    char str [2][1000];
    for (int i = 0; i <2;i++) 
    cin>>str[i];
    if (strlen(str[0]) == strlen(str[1]))
    cout<<"the same long"<<endl;
    else if (strlen(str[0]) > strlen(str[1]))
    cout<<str[0]<<endl;
    else
    cout<<str[1]<<endl;
    return 0;
}
