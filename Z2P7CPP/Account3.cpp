#include<iostream>
using namespace std;
class Account
{
public:
string accountHolder;
string accountNumber;
int accountBalance;
void createAccount(string accountHolder,string accountNumber){
   this-> accountHolder=accHolder;
   this-> accountNumber=accNumber;
    accountBalance=1000;
}
void deposit(int depositAmount){
    accountBalance=accountBalance+depositAmount;
}
bool withdraw(int withdrawAmount){
    if(withdrawAmount>accountBalance){
        return false;
}else{
    accountBalance=accountBalance-withdrawAmount;
    return true;
}
}
void showData(){
    cout<<"_____Current Info_____"<<endl;
    cout<<"Account Holder Name:"<<accountHolder<<endl;
    cout<<"Account Number:"<<accountNumber<<endl;
    cout<<"Account balance:"<<accountBalance<<endl;
}
};
int main(){
    Account account1;
    account1.showData();
    account1.createAccount("Zin Mar Ye","12345");
    account1.showData();
    account1.deposit(20000);
    cout<<"___After Deposit___"<<endl;
    cout<<"Balance is:"<< account1.accountBalance<<endl;
    bool result=account1.withdraw(5000);
    if(result){
        account1.showData();
    }else{
        cout<<"Error to withdraw!"<<endl;
    }
    
    return 0;
}