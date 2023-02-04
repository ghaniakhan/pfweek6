#include<iostream>
using namespace std;
string checkspeed(float speed);
main ()
{
float speed;
string answer;
cout<< "enter speed :";
cin>> speed;
answer= checkspeed(speed);
cout<< "print is :"<< answer;
}
string checkspeed(float speed)
{
string print;
if(speed>=10){
print= "slow";
}
if(speed>10 && speed>=50){
print= "average";
}
return print;
}
