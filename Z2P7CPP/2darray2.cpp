#include<iostream>
using namespace std;
int main(){
    int row=2,col=3;
    int num[row][col];
    for (int i=0;i<row;i++){ //outer loop for row
        for (int j=0;j<col;j++){  //inner loop for col
            cout<<"Enter number : ";
            cin>>num[i][j];  // num[0][0] num[0][1]
            cout<<endl;
        }
    }
    cout<<"____Elements____\n";
    int total=0;
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<num[i][j]<<"\t";
            total+=num[i][j];
            count++;
        }
        cout<<endl;
    }
    float avg=total*0.1/count;
    cout<<"Total :"<<total <<endl;
    cout<<"Average : "<< avg;
    cout<<"\nTotal number:"<<count << endl;

// sum of cols in 2D Array
    for(int j=0;j<col;j++){  //col for outer loop
        int sum=0;
          for(int i=0;i<row;i++){  //row for inner loop
            sum+=num[i][j];
        }
                cout<<"\n Sum for col"<<j+1<<":"<<sum<< endl;
    
    }
    // calculate Maxvalue in 2D Array :
    int max_num=num[0][0]; //variable for max assigned with
    for(int i=0;i<row;i++){
        int max_num_in_row=num[i][0]; //num[0][0] num[1][0]
        for(int j=0;j<col;j++){
            if(max_num<num[i][j]){
                max_num=num[i][j];
            }
            if(max_num_in_row<num[i][j]){
                max_num_in_row=num[i][j];
            }
        }
        cout<<"\nMax number is row : "<<max_num_in_row<<endl;
    }
    cout<<"Calculate Max value in 2D Array \n";
    cout<<"Max value is :"<<max_num<<endl;

  return 0;
}