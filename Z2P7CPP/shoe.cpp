#include<iostream>
using namespace std;
class Shoe{
 private:
    int id;
    int price;
    string name;
    string  brand;
    string color;
    string size;
 public:
   Shoe(){
     price=0;
     name=brand=color=size="";
}
   Shoe(int id,string name,string brand){
    this->id=id;
    this->name=name;
    this->brand=brand;
}
   Shoe(int id,int price,string name,string brand,string color,string size){
    this->id=id;
    this->price=price;
    this->name=name;
    this->brand=brand;
    this->color=color;
    this->size=size;
}
void init(int id,int price,string name,string brand,string color,string size){
    this->id=id;
    this->price=price;
    this->name=name;
    this->brand=brand;
    this->color=color;
    this->size=size;
}
void showData(){
    cout<<"Shoe Info: "<<endl;
    cout<<id<<"\t"<<name<<"\t"<<brand<<"\t"<<color<<"\t"<<size<<"\t"<<price<<endl;
   }
   
};
int main(){
    Shoe shoe1;
    shoe1.init(1,12000,"Sneaker","Adda","white","Medium");
    shoe1.showData();
    Shoe shoe2(2,"Walking Shoe","Adidasa");
    shoe2.showData();
    Shoe shoe3(3,25000,"Running shoe","Nike","Black","Medium");
    shoe3.showData();
    return 0;
}