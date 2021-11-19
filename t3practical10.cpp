// Practical 10 OOps Lab 
/*
   Task 3 : This pointer in C++
   WAP to pass two variables in a parameterized constructor during object 
   creation and have same names variables as class member data and constructor 
   parameters. Your job is to calculate the remainder of those two numbers.
*/
#include <iostream>
#include <cstring>
using namespace std ;
class Numbers
{
    private :
      int x ;
      int y ;
    public :
      void set(int x , int y)
      {
          this->x = x ;
          this->y = y ;
      }
      void rem()
      {
          int rem = this->x%this->y ;
          cout<<"Remainder of X/Y is : "<<rem ;
      }
};

int main()
{
    cout<<"\t\t Akash Yadav 200111076 A \n\n" ;
    int x , y  , i ;
    cout<<"Enter X and Y : " ;
    cin>>x>>y ;
    Numbers num ;
    num.set(x,y) ;
    num.rem() ;
    return 0;
}
