#include<iostream>
using namespace std;
int main(){
    int num1,num2,Total;
    cout<<"Enter item price:";
    cin>>num1;
    cout<<"Enter item quantity:";
    cin>>num2;


    int num3=num1*num2; 
     if(num3>5000){    
     Total=num3-(num3*0.1);
     cout<<"Total expense:"<<Total<<endl;
     }else{
     cout<<"Total expense:"<<num3<<endl;
    }

    return 0;
}