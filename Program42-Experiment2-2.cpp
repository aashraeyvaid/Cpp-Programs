#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    int age;
    string designation;
    double salary;
};
int main()
{
    employee emp[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the name:- ";
        cin>>emp[i].name;
        cout<<endl;
        cout<<"Enter the age:- ";
        cin>>emp[i].age;
        cout<<endl;
        cout<<"Enter the designation:- ";
        cin>>emp[i].designation;
        cout<<endl;
        cout<<"Enter the salary:- ";
        cin>>emp[i].salary;
    }
    for(int i=0;i<5;i++)
    {
        cout<<emp[i].name<<endl;
        cout<<emp[i].age<<endl;
        cout<<emp[i].designation<<endl;
        cout<<emp[i].salary<<endl;
    }
}