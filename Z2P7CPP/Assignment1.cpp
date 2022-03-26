#include<iostream>
using namespace std;
int main(){
  int myDays;
  cout<<"Enter days to calculate:";
  cin>> myDays;
  int years=myDays/365; //get Days
  int days=myDays%365;// get days to calculate months and years
  int months =days/30; //get months
  days %=30; //get days
  cout<< myDays<<"Days=" << years << "Years:"<<months<<"Months:"<<days<<"Days:";
  return 0;
}