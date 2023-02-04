#include<iostream>
using namespace std;
float checkcost(string city,string product,float quantity);
main ()
{
string city;
string product;
float quantity;
float answer;
cout<< "enter city name  :";
cin>> city;
cout<< "enter product name :";
cin>> product;
cout<< "enter quantity :";
cin>> quantity;
answer= checkcost(city,product,quantity);
cout<< "the cost of product is :"<< answer; 
}
float checkcost(string city,string product,float quantity)
{
float cost;
if(city== "varna" && product== "coffee"){
cost= 0.45*quantity;
}
if(city== "plovdiv" && product== "coffee"){
cost= 0.40*quantity;
}
if(city== "sofia" && product== "coffee"){
cost= 0.50*quantity;
}
if((city== "varna" || city== "plovdiv" ) && (product== "water")){
cost= 0.70*quantity;
}
if(city== "sofia" && product== "water"){
cost= 0.80*quantity;
}
if(city== "varna" && product== "beer"){
cost= 1.10*quantity;
}
if(city== "plovdiv" && product== "beer"){
cost= 1.15*quantity;
}
if(city== "sofia" && product== "beer"){
cost= 1.20*quantity;
}
if(city== "varna" && product== "sweets"){
cost= 1.35*quantity;
}
if(city== "plovdiv" && product== "sweets"){
cost= 1.30*quantity;
}
if(city== "sofia" && product== "sweets"){
cost= 1.45*quantity;
}
if(city== "varna" && product== "peanuts"){
cost= 1.55*quantity;
}
if(city== "plovdiv" && product== "peanuts"){
cost= 1.50*quantity;
}
if(city== "sofia" && product== "peanuts"){
cost= 1.60*quantity;
}
return cost;
} 