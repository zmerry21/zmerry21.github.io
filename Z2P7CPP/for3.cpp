#include<iostream>
using namespace std;
int main(){
  // start=> end => (1) sum (2) count(3) Avg=sum/count
  //(1) ask user to enter start and end
  int start,end,sum=0,count=0;
  float average;
  cout<<"Enter start number:";
  cin>>start;
  cout<<"Enter End number:";
  cin>>end;

  //(2)initialize =sum=0 / count = 0
  // (3) for (number less than or equal to end number) add number to sum and increment count
   for(int i=start;i<=end;i++){
       count++;
       sum+=i;
   }
  //(4) calculate average by formula avg=sum/count
        average=(float)sum/count;
  //(5) out result
      cout<<"sum of "<< start<< "to"<< end <<"is:"<<sum<<endl;
      cout<<"Total Count is :"<< count<<endl;
      cout<<"Average:"<< average<< endl;


    return 0;
}