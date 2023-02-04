#include<iostream>
using namespace std;
float calculatediscount(string day,string month,float totalamount);
main()
{
string day;
string month;
float totalamount;
float totaldiscount;
float answer;
cout<< "enter day :";
cin>> day;
cout<< "enter month :";
cin>>  month;
cout<< "enter total amount :";
cin>> totalamount;
answer= calculatediscount(day,month,totalamount);
cout<< "discount"<< answer ;
}
float calculatediscount(string day,string month,float totalamount)
{
float discountamount;
float discount;
if(day== "sunday" && month== "october" || "march" || "august"){
discountamount= (totalamount*10)/100; 
discount= totalamount-discountamount;
}
else if(day== "sunday" && month== "december" ||  "november" ){
discountamount= (totalamount*5)/100; 
discount= totalamount-discountamount;
}
return discount;
}      