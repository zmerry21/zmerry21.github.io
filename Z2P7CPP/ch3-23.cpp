#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a number:";
   cin>>num;
   if(num%5==0 || num%3==0){
      // cout<<num<<"is divisible by 5 or 3!";
       if(num%5==0){
           cout<<num<<"is divisible by 5"<<endl;
       }else{
           cout<<num<<"is divisible by 3"<<endl;
       }
   
   }else{
       cout<<num<<"is not divisible by 5 or 3!";
   }


    return 0;
}