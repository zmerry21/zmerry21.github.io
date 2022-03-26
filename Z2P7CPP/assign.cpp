#include<iostream>
using namespace std;
int main(){
  //assign value to variables;
  int a,b;
  a=7;
  b=2;
  cout<<"a="<<a << endl;
  cout<<"b="<<b << endl;
   a +=b ;   // a=a+b; //a=9
   cout<<"after a+=b ,a= "<< a << endl;

   a *=b ;   // a=a*b; //a=9*2 //a=18
   cout<<"after a*=b ,a= "<< a << endl;

    a -=b ;   // a=a-b;// a=18-2 //a=16
    cout<<"after a-=b ,a= "<< a << endl;

     a /=b ;   // a=a/b;// a=16/2 //a=8
    cout<<"after a/=b ,a= "<< a << endl;

    a %=b ;   // a=a%b;// a=8%2 //a=4
    cout<<"after a%=b ,a= "<< a << endl;

    //seconds:
    //minutes:60
    //hours: 3600
    //7500sec:
    //hour=seconds/3600
    



    return 0;
}