#include<iostream>
using namespace std;
int main(){
    int a,b;
  cout<<"Enter Product Price:";
  cin>>a;
  cout<<"Enter Discount Value:";
  cin>>b;
  float e=a-(a*(b*0.01)); 
  cout<< "After discount ="<< e << endl;
  return 0;
}