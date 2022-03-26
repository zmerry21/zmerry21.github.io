#include<iostream>
using namespace std;
int main(){
  int a,b,c,e,f;
  cout<<"Enter Loan Amount:";
  cin>>a;
  cout<<"Enter rate:";
  cin>>b;
  cout<<"Enter number of month:";
  cin>>c;
    
e=(a*(b*0.01));
cout<<"Monthly Interest :"<< e << endl;
f=e*c;
cout<<"Your Interest is :"<< f << endl;
return 0;
}