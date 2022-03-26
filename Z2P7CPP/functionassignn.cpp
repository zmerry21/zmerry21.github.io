#include<iostream>
using namespace std;
string itemList[5][3];
int count ;
void initializeItemData(){  
  cout<<"Enter number of data:";
  cin>>count;
    for (int i=0;i<count;i++){ 
         cout<<"Items information:"<<i+1<<endl;
        for (int j=0;j<3;j++){ 
             if(j==0){
             cout<<"Enter barcode: ";
             cin>>itemList[i][j];
            }else if(j==1){
             cout<<"Enter name: ";
             cin>>itemList[i][j];
            }else{
             cout<<"Enter price: ";
              cin>>itemList[i][j];
          }
       }
    }
  }
    void displayItemData(){
      cout<<"Items information:"<<count<<endl;
      cout<<"Barcode"<<'\t'<<"Name"<<'\t'<<"Price"<<endl;
         for(int i=0;i<count;i++){
           for (int j=0;j<3;j++){ 
             cout<<itemList[i][j]<<"\t";
          }
        cout<<endl;
      } 
    }
    void searchByBarcode(){
      string Barcode;
      cout<<"Enter Barcode you want to search:";
      cin>>Barcode;
     for(int i=0;i<count;i++){
      if(Barcode==itemList[i][0]){
         cout<<"Barcode"<<'\t'<<"Name"<<'\t'<<"Price"<<endl;
         cout<<itemList[i][0]<<"\t"<<itemList[i][1]<<"\t"<<itemList[i][2];
      }
       cout<<endl;
      }
    }
       int main(){
      initializeItemData();
      displayItemData();
      searchByBarcode();
    return 0;
  }
