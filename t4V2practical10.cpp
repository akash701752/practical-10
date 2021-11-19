// Practical 10 OOps Lab 
/*
    Task 4 : Operator Overloading in C++
    a). WAP, in which you write a friend function to overload a less than '<' operator in C++.
    b). WAP in which you can add two objects [every object would have 1 integer value] by 
    overloading + operator, which eventually would add the data values of those two object by adding the objects.
*/
#include <iostream>
#include <cstring>
using namespace std ;
class Numbers
{
    private :
      int x ;
    public :
      Numbers(int x)
      {
          this->x = x ;
      }
      friend int  operator + (Numbers &obj1 , Numbers &obj2) ; // Operator Loading
};
int operator + (Numbers &obj1 , Numbers &obj2)
{
    int c ;
    c = obj1.x + obj2.x ;
    return c ;
}
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A \n\n" ;
    int x , y   ;
    cout<<"Enter Object 1 Value : " ;
    cin>>x ;
    cout<<"Enter Object 2 Value : " ;
    cin>>y ;
    Numbers num1(x) , num2(y) ;
    cout<<"Addition of Two Objects is : "<<num1+num2 ;
    return 0;
}


