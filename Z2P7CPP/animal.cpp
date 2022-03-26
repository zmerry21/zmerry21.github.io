#include<iostream>
using namespace std;
class Animal{
    protected :
      string name;
      int leg;
    public: 
    void setName(string name){
        this->name=name;
    }
    void setLeg(int leg){
        this->leg=leg;
    }
    string getName(){
        return this->name;
    }
    int getLeg(){
        return this->leg;
    }
    void eat(){
        cout<<"\nI can eat!"<<endl;
    }
    void sleep(){
      cout<<"\nI can sleep!"<<endl;
    }
 };
 class Bird:public Animal{
      protected :
      int wings;
    public: 
    void setWings(int wings){
        this->wings=wings;
    }
    int getWings(){
        return this->wings;
    }
    void initdData(string name,int leg,int wings){
        this->wings=wings;
        this->name=name;
        this->
    }
    void sleep(){
      cout<<"\nI can fly!"<<endl;
    }
 
 };
 class Elephant:public Animal{

 };

int main(){
    Bird  bird1;
    bird1.setName(" ShweGae ");
    bird1.setLeg(2);
    cout<<bird1.getName()<<" has "<<bird1.getLeg()<<" Legs!";
    bird1.eat();
    bird1.sleep();
    bird1.setWings(2);
    bird1.fly();
    Bird Bird2;
    bird2.initData("NgweGae",2,2);
    cout<<bird1.getName()<<bird2.getLeg()<<" Leg and "<<bird1.getWings()<<" wings!";
    Elephant elephant1;
    elephant1.setName("MoMo");
    elephant1.setLeg(4);
    elephant1.setTail(1);
    elephant1.swim();
    elephant1.showInfo();
    cout<<elephant1.getName()<<" has "<<elephant1.getLeg()<<"4 Legs!";
    Elephant elephant1;
    return 0;
}