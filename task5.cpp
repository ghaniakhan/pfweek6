#include<iostream>
using namespace std;
float totalincome(string typeofscreening,int noofrows,int noofcolumns);
main ()
{
string typeofscreening;
int noofrows;
int noofcolumns;
float answer; 
cout<< "enter type of screening :";
cin>> typeofscreening;
cout<< "enter number of rows :";
cin>> noofrows;
cout<< "enter number of columns :";
cin>> noofcolumns;
answer= totalincome(typeofscreening,noofrows,noofcolumns);
cout<< " total income is :"<< answer;
}
float totalincome(string typeofscreening,int noofrows,int noofcolumns)
{
float sum;
float totalincomefromtickets;
if(typeofscreening== "premiere"){
sum= noofrows*noofcolumns;
totalincomefromtickets= 12*sum;
}
if(typeofscreening== "normal"){
sum= noofrows*noofcolumns;
totalincomefromtickets= 7.5*sum;
}
if(typeofscreening== "discount"){
sum= noofrows*noofcolumns;
totalincomefromtickets= -5*sum;
}
return totalincomefromtickets;
}    