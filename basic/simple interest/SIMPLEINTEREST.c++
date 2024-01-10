#include<iostream>
using namespace std;

int main()
{
  int p,t,r,SI;
  cout<<"Enter principle , time and rate of interest";
  cin>>p>>t>>r;
  SI = p*t*r/100;
  cout<<"Sinple Interest is "<<SI<<endl;
  return 0;

}