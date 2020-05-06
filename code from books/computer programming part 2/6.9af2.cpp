#include<bits/stdc++.h>
using namespace std;

 typedef struct
 {
     char first[20];
     char last[20];
 }nametype;

 typedef struct
 {
     int date;
     int month;
     int year;
 }datetype;

 typedef struct
 {
     int id;
     nametype name;
     nametype papa;
     nametype mama;
     datetype birth;
 }citizentype;

 int main()
 {
     citizentype citizen;
     cout<<"what is your first name? ans:";
     cin>>citizen.name.first;
     cout<<"what is your last name? ans:";
     cin>>citizen.name.last;
     cout<<"Now tell me papa's first name. :";
     cin>>citizen.papa.first;
     cout<<"Now tell me papa's last name. :";
     cin>>citizen.papa.last;
     cout<<"Now tell me mama's first name. :";
     cin>>citizen.mama.first;
     cout<<"Now tell me mama's last name. :";
     cin>>citizen.mama.last;
     cout<<"Birth date:";
     cin>>citizen.birth.date;
     cout<<"Birth month:";
     cin>>citizen.birth.month;
     cout<<"Birth year:";
     cin>>citizen.birth.year;
     cout<<"Now give me your ID :";
     cin>>citizen.id;

     cout<<"               NATIONAL ID CARD               \n";
     cout<<"Name:"<<citizen.name.first<<" "<<citizen.name.last<<"\n";
     cout<<"Fathers Name:"<<citizen.papa.first<<" "<<citizen.papa.last<<"\n";
     cout<<"Mother's name:"<<citizen.mama.first<<" "<<citizen.mama.last<<"\n";
     cout<<"Date of birth :"<<citizen.birth.date<<"/"<<citizen.birth.month<<"/"<<citizen.birth.year<<"\n";
     cout<<"ID:"<<citizen.id<<"\n";

     return 0;

 }
