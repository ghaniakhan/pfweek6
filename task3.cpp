#include<iostream>
using namespace std;
string checktitle(char gender,int age);
main ()
{
char gender;
int age;
string  answer; 
cout<< "enter gender :";
cin>> gender;
cout<< "enter age of gender :";
cin>> age;
answer= checktitle(gender,age);
cout<< "character is "<< answer;
}
string checktitle(char gender,int age)
{
string character;
if(gender== 'm' && age>=16){
character= "Mr";
}
if(gender== 'f' && age>=16){
character= "Ms";
}
return character;
}  