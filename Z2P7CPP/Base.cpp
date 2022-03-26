#include<iostream>
using namespace std;
class Base{
    private:     //only in class
      int x=9;
    protected:   
      int y=20;
    public:
      int z=22;
}
class publicDerived:public Base{
pubilc:
    void display(){
       cout<<"\n___Public Access Mode___\n";
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    }
};
class ProtectedDerived: protected Base{
public:
    void display(){
    cout<<"\n___Protected Access Mode___\n";
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    }
};
class PrivateDerived: private Base{
public:
    void display(){
    cout<<"\n___Private Access Mode___\n";
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    }
};
int main(){
   PublicDerived pd1;
   pd1.display();
   //cout<<pd1.y<<endl;     public only processed in main
   cout<<pd1.z<<endl;
   ProtectedDerived pd2;
   cout<<pd2.z<<endl;
   PrivateDerived pd3;
   cout<<pd3.z<<endl;

    return 0;
}