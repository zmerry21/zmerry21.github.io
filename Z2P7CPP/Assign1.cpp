#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any non-zero Number:";
    cin>>num;
  
  if(num<=0){
        cout<<"The number is negative!"<<endl;
    }else{
        cout<<"The number is positive!"<<endl;
    }

    return 0;
}