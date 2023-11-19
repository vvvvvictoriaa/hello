#include <iostream>
using namespace std;
struct goodday
{
    int year, month, day;
};
int main()
{   
    int n=0;
    int a,b,c;
    int mon[12];
    mon[0]=31;
    mon[2]=31;
    mon[4]=31;
    mon[6]=31;
    mon[7]=31;
    mon[9]=31;
    mon[11]=31;
    mon[3]=30;
    mon[5]=30;
    mon[9]=30;
    mon[10]=30;
    goodday good_day;
    cin >> good_day.year >> good_day.month >> good_day.day;
    a=good_day.year;
    b=good_day.month;
    c= good_day.day;
    if (a/4==0&&a/100!=0)
    {
         mon[1]=29;
         for (int i= 0; i<b-1; i++)
         n=n+mon[i]+c;
         
    }
    else
    {
       mon[1]=28;
      for (int i= 0; i<b-1; i++)
         n=n+mon[i]+c;
         
    }
    cout << "now is "<<n<<"day"<< endl;
    return 0;
}