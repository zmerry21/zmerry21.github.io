#include<iostream>
using namespace std;
int main(){
  int firstNumber,secondNumber;
  bool result;
  cout<<"Enter First Number:";
  cout<<"Enter Second Number:";
  result=(firstNumber == secondNumber);  //Compare firstNumber is equal to secondNumber
  cout<<firstNumber<<"=="<<secondNumber<<" ? is : "<<result<<endl;
  result=(firstNumber != secondNumber);  //Compare firstNumber is not equal to secondNumber
  cout<<firstNumber<<"!="<<secondNumber<<" ? is : "<<result<<endl;
  result=(firstNumber > secondNumber);  //Compare firstNumber is equal to secondNumber
  cout<<firstNumber<<">"<<secondNumber<<" ? is : "<<result<<endl;
  result=(firstNumber < secondNumber);  //Compare firstNumber is equal to secondNumber
  cout<<firstNumber<<"<"<<secondNumber<<" ? is : "<<result<<endl;
  


    
    return 0;
}