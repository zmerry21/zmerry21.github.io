#include<iostream>
using namespace std;
class Product{
  private:  
    string name;
    float price;
    int barCode;
  public:
  Product(){

  }
  void setName(string name){  //setter
      this->name=name;
  }
  string getName(){
      return this->name;
  }
  void setPrice(float price){
      this->price=price;
  }
  float getPrice(){
      return this->price;
  }
  void setBarCode(int code){
      if(code>=1000 && code<=9999){
          this->barCode=code;
      }else{
          cout<<"Invalid code:"<<code<<endl;
      } 
  }
  int getBarCode(){
      return this->barCode;
  }
};
int main(){
    string productName;
    float productPrice;
    int productCode;
  Product product1,product2;
  product1.setName("JDonut");  //use setter method
  cout<<product1.getName()<<endl; //getter
  product1.setPrice(950);
  cout<<product1.getPrice()<<endl;
  product1.setBarCode(1001);
  cout<<product1.getBarCode()<<endl;

  cout<<"Enter Product Name for product2:";
  //cin>>productName;
  getline(cin,productName); //support spacebar
  cout<<"Enter Product Price for product2:";
  cin>>productPrice;
  cout<<"Enter Barcode for product2:";
  cin>>productCode;
  product2.setName(productName);
  product2.setPrice(productPrice);
  product2.setBarCode(productCode);
  cout<<product2.getName()<<"\t"<<product2.getPrice()<<"\t"<<product2.getBarCode()<<endl;


  Product products[3]; //object array 0,1,2
  for(int i=0;i<3;i++){
     cout<<"Enter Product Name for product"<<i+1<<":";
  cin>>productName;
//   getline(cin,productName); //support spacebar
  cout<<"Enter Product Price for product"<<i+1<<":";
  cin>>productPrice;
  cout<<"Enter Barcode for product"<<i+1<<":";
  cin>>productCode;
     products[i].setName(productName);//setName
     products[i].setPrice(productPrice);
     products[i].setBarCode(productCode);
  }
  cout<<"\nProducts Information"<<endl;
  cout<<"No\t Name\t Price\t Barcode\n";
  for(int i=0;i<3;i++){
      cout<<i+1<<"\t"<<products[i].getName()<<"\t"<<products[i].getPrice()<<"\t"<<products[i].getBarCode()<<endl;
  }
  //int price[3];
  return 0;

}