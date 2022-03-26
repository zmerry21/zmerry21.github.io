#include<iostream>
#include<iomanip>
#include<cctype>
#include<cmath>
using namespace std;
  
   int main(){
      cout<<"\n____Functions of cctype Library____\n";
      cout<<"Is alpha('9') :"<< isalpha('9')<<endl;
      cout<<"Is alpha('A') :"<< isalpha('A')<<endl;
      cout<<"Is digit('9') :"<< isdigit('9')<<endl;
      cout<<"Lower case of 'A' :"<<(char)tolower('A')<<endl;
    
      cout<<"\n____Functions of cMath Library____\n";
      cout<<"3 power 5 is :"<<pow(3,5)<<endl;
      cout<<"Square root of 36 is:"<<sqrt(36)<<endl;
      cout<<"Value of sin(30)"<< sin(30)<<endl;
      cout<<"Value of         log(10)"<< log(10)<<endl;


        cout<<"\n_____Functions of iomanip Library___\n";
        cout<<"Spring"<<setw(20)<<"Days"<<endl;
        cout<<"Love"<<setw(26)<<"Yourself"<<endl;
    
    
    return 0;
}