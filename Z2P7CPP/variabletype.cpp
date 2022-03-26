#include<iostream>
using namespace std;
//global variable a
int a=10;
const float PI=3.14;
void display(){
    int a=20;
    cout<<"value of a inside Display function:"<<a;
    a=50;
    cout<<"value of a inside Display function:"<<a;
 }
void displayAnother(int a){
    cout<<"\nvalue of a inside another Display Function:"<<a;
}
void Area(int radius){
    float area=PI * radius *radius;
    cout<< "Area is :"<<area;
}
int main(){
    display();
    cout<<"\nValue of a outside functions:"<<a;
    displayAnother(30);
    Area(12);
    // PI=3.145;
}