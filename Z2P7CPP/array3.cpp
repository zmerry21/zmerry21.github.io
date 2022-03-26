#include<iostream>
using namespace std;
int main(){
    int mark[5];
    int i=0;
    while(i<5){
        cout<<"Enter mark:";
        cin>> mark[i];
        i++;
    }
    cout<<"Your marks:"<<endl;
    int sum=0;  //   initialize sum
    for(i=0;i<5;i++){
    cout<<mark[i]<<'\t';
    sum+=mark[i];  //   add marks to sum
}
cout<<"\nTotal Marks:" <<sum <<endl;
    return 0;
}