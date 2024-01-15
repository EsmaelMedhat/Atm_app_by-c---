#include <iostream>
using namespace std;
 int x=0;
     int o=0;
int n;
char m[3][3]={'1','2','3','4','5','6','7','8','9'};
char choose='X';
char pos;
int exit(){
return 0;
}
void des()
{
 system("cls");
 cout<<"Score|"<<"X"<<" |"<<"O\n";
cout<<"     |"<<x<<" |"<<o<<endl;

 for(int i=0;i<3;i++)
 {
 for(int n=0;n<3;n++)
 {
 cout<<"|"<<m[i][n]<<"|";
 }
 cout<<endl;
 }

}
void repeat()
{
 m[0][0]='1';m[0][1]='2';m[0][2]='3';m[1][0]='4';m[1][1]='5';m[1][2]='6';m[2][0]='7';m[2][1]='8';m[2][2]='9';

}
void want();
void pl()
{

    int h=0;
   des();
 cout<<"position by " <<choose<<endl;
 cin>>pos;
 for(int i=0;i<3;i++)
 {
 for(int n=0;n<3;n++)
 {
if(m[i][n]==pos)
 m[i][n]=choose;
if(m[i][n]=='X'||m[i][n]=='O')h++;
 }

 }

if(choose=='X'){
choose='O';}
else{

 choose='X';
}



if(m[0][0]==m[0][1]&&m[0][0]==m[0][2]){
    des();
   cout<<"the winner is "<<m[0][0];
 if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

}
 else if(m[1][0]==m[1][1]&&m[1][0]==m[1][2]){
  des();
   cout<<"the winner is "<<m[1][0];
  if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;
}
    else if(m[2][0]==m[2][1]&&m[2][0]==m[2][2]){
    des();
   cout<<"the winner is "<<m[2][0];
  if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

 }
    else if(m[2][0]==m[2][1]&&m[2][0]==m[2][2]){
    des();
   cout<<"the winner is "<<m[2][0];
     if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

    }
  else if(m[0][0]==m[1][1]&&m[2][2]==m[0][0]){
   des();
   cout<<"the winner is "<<m[2][2];
  if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

 }
  else if(m[0][2]==m[1][1]&&m[2][0]==m[0][2]){
    des();
   cout<<"the winner is "<<m[2][0];
  if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

  }
  else if(m[0][2]==m[1][2]&&m[2][2]==m[0][2]){
   des();
   cout<<"the winner is "<<m[2][2];
   if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;

  }
  else if(m[0][1]==m[1][1]&&m[2][1]==m[0][1]){
  des();
   cout<<"the winner is "<<m[0][1];

 if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;
 }
  else if(m[0][0]==m[1][0]&&m[2][0]==m[1][0]){
      des();
      cout<<"the winner is "<<m[1][0];
 if(m[1][0]=='X')
 x++;
if(m[1][0]=='O')
   o++;


 }
else if(h==9)want();
else{
pl();
}
}


int main()
{
pl();
want();
   return 0;
}
void want(){
int h;
cout<<"\nEnter  1:Exit 2:Any num to retry\n";
cout<<"your choice :";
cin>>h;
if(h==1)
cout<<exit();
else{
    repeat();
pl();
want();
}
}
