#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter number of  age";
  cin>>age;
  if(age>=12 && age<=15)
  {
   cout<<"Young"<<age;
  }
  else
  {
   cout<<"Not young"<<age;
  }
  return 0;
}