#include<iostream>
using namespace std;
int main(){
 int i=0;

 while(i<10){
     i++;
     if(i==4){
         break;
     }
     cout<<"Statement"<<i<< endl;
 }
 cout<<"--------End of program--------"<<endl;
    return 0;
}