#include <iostream>
using namespace std;

//my homework 
struct student
{
    int id;
    char name[30];
    int  grades[3];
    int average;
};
int main()
{
    int sum=0;
    int max = 0;
    student stu[10];
    for (int i=0; i<10; i++)
    {
        cin >>stu[i].id >> stu[i].name ;
        cin >> stu[i].grades[0]>>stu[i].grades[1] >> stu[i].grades[2];
        stu[i].average = (stu[i].grades[0] + stu[i].grades[1] + stu[i].grades[2])/3;
    }
for (int i=0; i<10; i++)
{
    for (int j=0; j<3; j++)
    sum += stu[i].grades[j];
}
cout <<(sum/30)<<endl;
for (int i=0; i<10; i++)
{
   if (stu[i].average > max)
   max = i;
}
cout <<"id:"<< stu[max].id<<endl;
cout <<"name:"<< stu[max].name<<endl;
cout <<"grade1:"<< stu[max].grades[0]<<endl;
cout <<"grade2:"<< stu[max].grades[1]<<endl;
cout <<"grade3:"<< stu[max].grades[2]<<endl;
cout <<"average:"<<stu[max].average<<endl;
return 0;
}
