#include<iostream>
using namespace std;
int main(){
    int rain_total,wind_total,Temp_total,count;
    float rain_avg,wind_avg,Temp_avg;
    cout<<"Number of months: ";
    cin>>count;
    int weather_info[count+2][4];
    for(int i=0;i<count;i++){
        cout<<"weather information:"<<i+1<<endl;
        for(int j=0;j<4;j++){
            if(j==0){
                weather_info[i][j]=i+1;
            }else if(j==1){
                cout<<"Enter rain: ";
                cin>>weather_info[i][j];
                rain_total += weather_info[i][j];
                rain_avg = rain_total*1.0/count;
            }
            else if(j==2){
                cout<<"Enter wind: ";
                cin>>weather_info[i][j];
                wind_total += weather_info[i][j];
                wind_avg = wind_total*1.0/count;
            }else{
                cout<<"Enter Temp:";
                cin>>weather_info[i][j];
                Temp_total += weather_info[i][j];
                Temp_avg = Temp_total*1.0/count;
            }
        }
    }
     //Output:
     cout<<"\nWeather information for :"<<count<<"Months"<<endl;     
     cout<<"\nMonth\tRain\tWind\tTemp"<<endl;
         for(int i=0;i<count;i++){
             for(int j=0;j<4;j++){
                 cout<<weather_info[i][j]<<"\t";
             } 
              cout<<endl;              
        }
                cout<<"Total"<<"\t"<< rain_total<<"\t"<< wind_total<<"\t"<<Temp_total;
                cout<<endl; 
                cout<<"Average"<<"\t"<< rain_avg<<"\t"<< wind_avg<<"\t"<<Temp_avg;
                cout<<endl;   
    return 0;
    }
