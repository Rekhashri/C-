#include<iostream>
using namespace std;

int main()
{
  float distance,v,u ,a;
  cout<<"Enter v,u,a";
  cin>>v>>u>>a;
  distance=(v*v-u*u)/2*a;
  cout<<"Distance is "<<distance<<endl;
  return 0;

}