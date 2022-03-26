#include<iostream>
using namespace std;
int main(){
    int Programming,English,Math,max;
    cout<<"Enter programming mark :"<<endl;;
    cin>>Programming;
    cout<<"Enter English mark :";
    cin>>English;
    cout<<"Enter Math mark :";
    cin>>Math;

      max=Programming;
     if(English>max){
         max=English;
     }if(Math>max){
         max=Math;
     }
    cout<<"Maximum Mark:"<< max <<endl;
     

     int min=Programming;
     if(English<min){
         min=English;
     }if(Math<min){
         min=Math;
     }
     cout<<"Minimum Mark:" <<min <<endl;    
     
    int Total=Programming+English+Math;
    cout<<"Total mark:"<< Total << endl;

    int avg=Total/3  ;
    cout<<"Average Mark :"<< avg <<endl;

     if( Programming >=80  ||   English>=80   ||  Math>=80 ){
        cout<<"You are Disticntion "<<endl;
      } else if( Programming >=50  &&  English>=50   &&   Math>=50 ){ 
           cout<<"You are Passed"<<endl;
      }else{
          cout<<"You are Failed"<<endl;
      }

    return 0;
}