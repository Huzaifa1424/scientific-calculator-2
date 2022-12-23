#include <iostream>
#include <cmath>
using namespace std ;
void sum(int var1,int var2)
{cout<<"sum of two integers="<<var1+var2<<endl;}
void dif(int var1,int var2)
{cout<<"difference of two integers="<<var1-var2<<endl;}
void prod(int var1,int var2)
{cout<<"product of two integers="<<var1*var2<<endl;}
void dv(int var1,int var2)
{cout<<"division of two integers="<<var1/var2<<endl;}
int main(){
 int var1,var2;
sum(6,8);
dif(9,5);
prod(5,4);
dv(20,5);
cout<<"square root an integer="<<sqrt(25)<<endl;
cout<<"log of an integer="<<log(90)<<endl;
return 0;

}