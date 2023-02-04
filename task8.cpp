#include<iostream>
using namespace std;
float checkbalance(int budget,string categoryofticket,int noofpeopleingroup);
main ()
{
int budget;
string categoryofticket;
int noofpeopleingroup;
float answer;
cout<< "enter budget :";
cin>> budget;
cout<< "enter category of ticket :";
cin>>  categoryofticket; 
cout<< "enter number of people in group :";
cin>> noofpeopleingroup;
answer= checkbalance(budget,categoryofticket,noofpeopleingroup);
cout<< "remainingmoney is :"<< answer;
}
float checkbalance(int budget,string categoryofticket,int noofpeopleingroup)
{
float budgetontransportation;
float leftmoneyaftertransportation;
float moneyofticket;
float remainingmoney;
if((noofpeopleingroup>=1 || noofpeopleingroup<=4) && categoryofticket== "vip"){
budgetontransportation= ((75/100))*(budget);
leftmoneyaftertransportation= budget-budgetontransportation;
moneyofticket= 499.99*noofpeopleingroup;
if(moneyofticket>= leftmoneyaftertransportation){
remainingmoney= moneyofticket-leftmoneyaftertransportation;}}
return remainingmoney;  
}



 
   
