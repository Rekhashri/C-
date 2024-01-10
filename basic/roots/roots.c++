#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  float r1,r2,a,b,c;
  cout<<"Enter a,b,c";
  cin>>a>>b>>c;
  r1= (-b + sqrt((b*b) -(4*a*c)))/2*a; 
  r2= (-b - sqrt((b*b) -(4*a*c)))/2*a; 
  cout<<"Square of equation are"<<r1<<" "<<r2;
  return 0;
}