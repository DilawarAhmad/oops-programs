#include <iostream>
using namespace std;
 
int sum(int a, int b){
return (a+b);
}
int main()
{
int a, b, result;
cout<<"Enter the two numbers to be added: "; cin>>a>>b;
 
result = sum(a,b);
 
cout<<"\nSum of the two numbers : "<<result;
}