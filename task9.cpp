#include<iostream>
#include<cmath>
using namespace std;
main ()
{
string typeofyear;
int noofweekendstraveltohometown;
int noofholidaysinayear;
int weekends= 48;
int noofdaysplayinholidays;
int noofdaysplaynotworking;
int playweekends;
int totalplaydays;
int totalplaydaysinyear;
int playinleapyear;
int totalplayinleapyear; 
cout<<" enter type of year :";
cin>> typeofyear;
cout<< "enter no of weekends travel to hometown :";
cin>> noofweekendstraveltohometown;
cout<< "enter no of holidays in a year :";
cin>> noofholidaysinayear;
noofdaysplayinholidays= 0.667 *noofholidaysinayear;
noofdaysplaynotworking = 48- noofweekendstraveltohometown;
playweekends= noofdaysplaynotworking* 0.75; 
totalplaydays= noofdaysplayinholidays+playweekends+noofweekendstraveltohometown;
totalplaydays= noofdaysplayinholidays+noofdaysplaynotworking ;
totalplaydays= ceil(totalplaydays);
if( typeofyear== "normal"){
cout<< "he plays "<< totalplaydays<< "times in a year";
}
if(typeofyear== "leap"){
playinleapyear= 0.15*totalplaydays;
totalplayinleapyear = totalplaydays+ playinleapyear;
cout<< "he  plays :"<<totalplayinleapyear<< "times in a leap year";
}
}
 



