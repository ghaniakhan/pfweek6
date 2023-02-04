#include<iostream>
using namespace std;
void calculategrade(int marks,string grade);
main ()
{
int marks;
string grade;
cout<< "enter marks :";
cin>> marks;
calculategrade(marks,grade); 
}
void calculategrade(int marks,string grade)
{
if(marks<50){
cout<< "your grade is F";
}
if(marks>=50 && marks<=60){
cout<< "your grade is E";
}
if(marks>=61 && marks<=70){
cout<< "your grade is D";
}
if(marks>=71 && marks<=80){
cout<< "your grade is C";
}
} 