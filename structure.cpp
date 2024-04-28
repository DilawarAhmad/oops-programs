#include <iostream>
#include <string>
using namespace std;
 
struct PersonInfo
 {
   int age;
   char name[50];
   double salary;
 };
 
void printStructInfo(PersonInfo p)
 {
   cout<<"PersonInfo Structure:";
   cout<<"\nAge:"<<p.age;
   cout<<"\nName:"<<p.name;
   cout<<"\nSalary:"<<p.salary;
 }
int main()
 {
   PersonInfo p;
   cout << "Enter name: ";
   cin.get(p.name, 50);
   cout << "Enter age: "; cin >> p.age;
   cout << "Enter salary: "; cin >> p.salary;
    
   printStructInfo(p);
 }