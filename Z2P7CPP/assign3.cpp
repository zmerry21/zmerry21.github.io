#include<iostream>
using namespace std;
int main(){
   string uName,uPass;
   cout<<"Enter User Name:";
   cin>>uName;
   cout<<"Enter Passsword:";
   cin>>uPass;
   if(uName=="mmit" &&  uPass=="admin123"){
       cout<<"Login Success!";
      
       }else if(uName=="mmit"){
           cout<<"Password is incorrect"<<endl;
       } else{
         cout<<"User Name and Password did not match!";
   }
    return 0;
}