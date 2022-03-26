#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Please enter a character,'q' to exit the program!";
  
  do{
      cout<<"\nEnter a character:";
      cin>>ch;
      if(ch!='q'){
      if(ch>='0' && ch<='9'){
          cout<< ch<< " is a digit !";
      }else{
          cout<<ch<< "is a character!";
      }
  }else{
      cout<<"\nTerminating from program...!"<<endl;
  }
  }while(ch!='q');
    return 0;
}