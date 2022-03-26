#include<iostream>
using namespace std;
class Animal{
   
 class Elephant:public Animal{
     private:


 };

int main(){
    Bird  bird1;
    bird1.setName(" ShweGae ");
    bird1.setLeg(2);
    cout<<bird1.getName()<<" has "<<bird1.getLeg()<<" Legs!";
   
    return 0;
}