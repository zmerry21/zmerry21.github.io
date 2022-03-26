#include<iostream>
using namespace std;
int main(){
    //even odd
    int num;
    string result;
    cout<<"enter any number:";
    cin>>num;
    result=(num%2==0)?"EVEN":"ODD";
    /*
    if(num%2==0){
        result="EVEN";
    }else{
        result="ODD";
    }*/
    cout<<num<<"is"<<result<<endl;
  
    return 0;
}