#include<iostream>
#include<windows.h>
using namespace std;
class User
{
public:
 User(){Balance=2000;
 password="12345";
 userName="Esmael medhat omar mohamed alhabiby";
 age=25;
 job="Ai engineer";
    }
         ~User() = default;
void set_password(char *password){this->password=password;}
void set_Balance(double Balance){this->Balance=Balance;}
void set_name(string userName){this->userName=userName;}
void set_job(char* job){this->job=job;}
void set_age(int age){this->age=age;}
string get_name(){return userName;}
string get_job(){return job;}
int get_age(){return age;}
string get_password(){return password;}
double get_Balance(){return Balance;}
private:
string userName;
int age;
char*job;
char *password;
double Balance;
};
class ATM{
public:
void TopOfAnyMenu(){
cout<<"__________________________________________\n";
cout<<"\n________________ ATM ____________________\n";
cout<<"\n__________________________________________\n";
}
void maiNMenu()
{
TopOfAnyMenu();
    cout<<"  ATM              \n\n\n";
    cout<<"      Enter 1 to Balance            \n\n";
    cout<<"      Enter 2 to Despoit             \n\n";
    cout<<"      Enter 3 to Withdraw             \n\n";
    cout<<"      Enter 4 to Show data             \n\n";
    cout<<"      Enter 5 to Exit             \n\n";
}
};
class AtMFunctinalitY{
ATM atm;
User user;
public:
double Balance=user.get_Balance();
virtual double balance(){
  return Balance;
}
virtual void Desposit(double DeposiTmoney)
{
    atm.TopOfAnyMenu();
            cout<<"give me your desposit  :";
    cin>>DeposiTmoney;
        Balance+=DeposiTmoney;
user.set_Balance(Balance);
cout<<"\n                Successed";
cout<<"\n Now total  :"<<Balance<<"$";
}
virtual void SuccesSWithdraW(double WithdraWMoney){
  Balance-=WithdraWMoney;
  user.set_Balance(Balance);
  cout<<"\n Now total  :"<<user.get_Balance()<<"$";
}
virtual void FalliedWithdraW(){
cout<<"\nyou donot have this money\n";
cout<<"please retry\n";
Sleep(999);
}
virtual void Withdraw(double WithdraWMoney)
{  atm.TopOfAnyMenu();
    cout<<"give me your Withdraw :";
  cin>>WithdraWMoney;
  if(Balance>WithdraWMoney)
    SuccesSWithdraW(WithdraWMoney);
    else{
    FalliedWithdraW();
Withdraw(WithdraWMoney);
    }
}
virtual int Exit(){return 0;}
virtual void user_data(){
atm.TopOfAnyMenu();
cout<<"----------------Your data\n";
cout<<"Name  :"<<user.get_name()<<"                     job   :"<<user.get_job();
cout<<"\n Age  :"<<user.get_age()<<endl;
}
};
class Safe{
User user;
ATM atm;
AtMFunctinalitY function;
public:
bool password(){
  bool access=false;
   string pin;
   int error=0;
    atm.TopOfAnyMenu();
    do{
 cout<<"user pin :";
    cin>>pin;
    if(pin!=user.get_password()){
       error++;
        if(error<3){
        cout<<"userpin isnot true please rewrite\n";
      }
    }
       else{
access=true;
}
    }while(error<3&&user.get_password()!=pin);
if(error>=3&&user.get_password()!=pin){
cout<<"go to company";
access=false;
}
return access;
}
};
class AtmWork{
User user;
ATM atm;
Safe safe;
AtMFunctinalitY functions;
public:
char choice;double depositmoney,withdrawmoney;
void tomenu();
void run_case1(){
system("cls");
atm.TopOfAnyMenu();
cout<<"\n Now total  :"<<functions.balance()<<"$";
tomenu();
}
void run_case2(){
system("cls");
functions.Desposit(depositmoney);
tomenu();
}
void run_case3()
{system("cls");
functions.Withdraw(withdrawmoney);
tomenu();
}
void run_case4()
{system("cls");
functions.user_data();
tomenu();
}

void run(){
system("cls");
atm.maiNMenu();
cin>>choice;
if(choice=='1')
run_case1();
else if(choice=='2')
run_case2();
else if (choice=='3')
run_case3();
else if (choice=='4')
run_case4();
else if(choice=='5')
cout<<functions.Exit();
else {
run();
}
}
void work()
{
if(safe.password())
run();
}

};
void AtmWork::tomenu(){
char choice;
cout<<"\nEnter 1 to menu or any number to Exit :\n";
cout<<"your number :";
cin>>choice;
if(choice=='1'){
system("cls");
run();
}
else{
  cout<<functions.Exit();
}
}
int main() {
AtmWork esmael;esmael.work();
    return 0;
}
