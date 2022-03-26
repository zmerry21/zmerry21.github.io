#include<iostream>
using namespace std;
class Student{
    private:
       int rno;
       string name;
    public:
    Student(){

    }
       Student(int rno,string name){
          this->rno=rno;
          this->name=name;
        }
    void displayInfo(){
        cout<<"\nroll no:"<<rno<<"\tName:"<<name<<endl;
    }
    void rnosearch(){
      int k;
      cout<<"Enter Roll number you want to search:";
      cin>>k;
};
int main(){
    Student stu[5];
    int rno;
    string name;
    for(int i=0;i<5;i++){
        cout<<"Enter Student:"<<i+1<<"Information:"<<endl;
        cout<<"Enter rno:";
        cin>>rno;
        cout<<"Enter Name:";
        cin>>name;
        cin.ignore();
        stu[i]=Student(rno,name);
    }
    // accept Student data from user input
    //display info
    cout<<"\n______Student Information_____\n";
    for(int i=0;i<5;i++){
       stu[i].displayInfo();       
    }
    
    cout<<"\n____Your data Information____\n";
    for(int i=0;i<5;i++){
      if(k==rno){
         stu[i].rnoSearch();
      }
    }
    return 0;
    }