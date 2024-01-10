#include<iostream>
using namespace std;
int main()
{
  int hour;
  cout<<"Enter number of  hour";
  cin>>hour;
  if(hour>=9 && hour<=18)
  {
   cout<<"Working hour"<<hour;
  }
  else
  {
   cout<<"Not working hour"<<hour;
  }
  return 0;
}