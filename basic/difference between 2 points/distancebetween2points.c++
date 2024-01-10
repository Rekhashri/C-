#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int x1,x2,y1,y2;
  float dist;
  cout<<"Enter x1,x2,y1,y2";
  cin>>x1>>x2>>y1>>y2;
   dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   cout<<"Distance between two points are"<<dist;
   return 0;
}