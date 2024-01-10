#include<iostream>
using namespace std;

int main()
{
  int x=5,y,i=3;
  i++;
  y=++x;//x=6,y=6
  y=x++;//x=6,y=5
  cout<<i<<x<<y<<endl;
  return 0;
}