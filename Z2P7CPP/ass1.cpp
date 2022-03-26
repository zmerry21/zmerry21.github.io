#include<iostream>
using namespace std;
int main(){
  int i,num,number,zero,negative,positive;
 zero=0;
 negative=0;
 positive=0;
 i=1;
 cout<<"How many numbers do you type?"<< endl;
 cin>>number;
      do{
        cout<<"Enter any number :"<<endl;
        cin>>num;
      if(num==0)zero++;
      if(num<0)negative++;
      if(num>0) positive++;
      i++;
      }while(i!=number){
     cout<<"Number of zero :"<<zero <<" \nNumbers of positive number :"<<positive  <<"\nNumbers of negative number :"<<negative  <<endl;
}
    return 0;
}