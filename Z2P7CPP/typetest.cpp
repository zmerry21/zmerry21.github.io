#include<iostream>
using namespace std;
int main(){
   //type casting;
   //implicit;
   //int float char string
   //a => 
   char x='+';
   string z="Hello";
   int y=2;
   y=x; //implicit char to int => char=> int
   cout<< " Y is :"<< y << endl;
   float h= y+1.2;  //int=> float => implicit
   cout<< "Float is :" << h << endl;

   int a=15;
   int b=2;
   float c=1.0*a/b; //15/2=7.5 //explicit
  // float c=(float)a/b; //15/2=7.5 //explicit
   cout<<"Float c="<< c << endl;

   
    return 0;
}
