#include<iostream>
using namespace std;
int main(){
  int start,end,num=0,count=0;
  cout<< "Enter start number :";
  cin>>start;
  cout<<"Enter end number :";
  cin>> end;
  while(start<=end){
       num=start;
       count++;
       start++;
       
       if(num%8==0 && num%5==0){
         cout<<" The numbers divisible by 8 and 5:"<< num <<endl;
        
     }else if(num%8==0){
         cout<<"The numbers divisible by only 8 :"<< num <<endl;

     }else if(num%5==0){
         cout<<"The numbers divisible by only 5:"<< num << endl;

     }else{
         cout<< "The numbers not divisible by 8 and 5:"<< num <<endl;

     }num++;
  }
    return 0;
}