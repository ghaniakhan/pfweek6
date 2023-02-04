#include<iostream>
using namespace std;
float lowestprice(int noofkilometers,string periodofday);
main ()
{
int noofkilometers;
string periodofday;
float answer;
cout<< "enter number of kilometers :";
cin>> noofkilometers;
cout<< "enter period of day :";
cin>> periodofday;
answer=  lowestprice(noofkilometers,periodofday);
cout<< "lowest fare is :"<< answer; 
}
float lowestprice(int noofkilometers,string periodofday)
{
float fare;
if(periodofday== "day" &&  (noofkilometers<20 ||  noofkilometers<100)){
fare= 0.79*noofkilometers;
}
if(periodofday== "night" &&  (noofkilometers>20 || noofkilometers<100)){
fare= 0.79*noofkilometers;
}
if((periodofday== "night" || periodofday== "day" ) && noofkilometers<=20){
fare= 0.09*noofkilometers;
}
if((periodofday== "day" || periodofday== "night") && noofkilometers>=100){
fare= 0.06*noofkilometers;
}
return fare;
}   
       
    