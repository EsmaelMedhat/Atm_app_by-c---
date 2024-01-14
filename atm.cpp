#include <iostream>
#include <windows.h>
using namespace std;
int choice;
int balanc=1200;
double despoit=0;
double withraw=0;
int desi;
void all(){
cout<<"__________________________________________\n";
cout<<"\n________________ ATM ____________________\n";
cout<<"\n__________________________________________\n";
}
void des()
{
    cout<<"  ATM              \n\n\n";

    cout<<"      Enter 1 to Balance            \n\n";
    cout<<"      Enter 2 to Despoit             \n\n";
    cout<<"      Enter 3 to Withdraw             \n\n";
    cout<<"      Enter 4 to Exit             \n\n";
cout<<"your choice :";
cin>>choice;
}
void password();

int Exit()
{
   return 0;
}

string Balance(string &money)
{
   money=to_string(balanc);
  return "Total:"+money+" $";
}
void Desposit(int money)
{
    all();
    string mone;
    cout<<"give me your desposit  :";
    cin>>money;
        balanc+=money;
cout<<"\n"<<Balance(mone);
}
void sahba(int money)
{ all();
    cout<<"give me your Withdraw :";
  cin>>money;
  if(money>balanc){
    cout<<"\nyou donot have this money\n";
cout<<"please retry\n";
sahba(money);

  }
else{


   balanc-=money;
  cout<<"\n Now total  :"<<balanc<<"$";
}
}
void tomenu();
void run(){
int y,h;
string c;
des();
if(choice==1){
system("cls");
all();
cout<<Balance(c);
 tomenu();
}
if(choice==2){
system("cls");
Desposit(y);
 tomenu();
}
if(choice==3){
system("cls");
sahba(h);
 tomenu();
}
if(choice==4)
cout<<Exit();
else{
  if(desi==1){
  system("cls");
  run();
  }
}

}



int main()
{
password();
   return 0;
}
void password(){
   string pin;
    string userpin="1234";
    int eror;
    all();
    do{
 cout<<"user pin :";
    cin>>pin;
    if(pin!=userpin){
       eror++;
        if(eror<3){
        cout<<"userpin isnot true please rewrite\n";


      }
    }
       else{
system("cls");
run();
}
    }while(eror<3&&userpin!=pin);
if(eror>=3&&userpin!=pin)
cout<<"go to company";
}
void tomenu(){
cout<<"\nEnter 1 to menu or any number to Exit :\n";
cout<<"your number :";
cin>>desi;
if(desi==1){
system("cls");
run();
}
else{
  cout<<Exit();
}
}
