#include<iostream>
using namespace std;
int main(){
 
int num1;

cout<<"enter any number: ";
cin>>num1;
cout<<"Answer is: ";
int i = 0;
int i2 = 1;
int fab;
if(num1 >= 1){
    cout<<i;
    cout<<" ";
}
if(num1>=2){
cout<<i2;
cout<<" ";
}
if(num1>=3)
{
 for (int s=2; s < num1 ; s++)
 {
    fab=i+i2;
    i=i2;
    i2=fab;
    cout<<fab<<" " ;

 }
 
}



return 0;
}