// Practical 10 OOps Lab 
/*
    Task 4 V2: Operator Overloading in C++
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
      friend void  operator < (Numbers &obj1 , Numbers &obj2) ; // Operator Loading
};
void operator < (Numbers &obj1 , Numbers &obj2)
{
    if(obj1.x<obj2.x)
    {
        cout<<"Object 1 is Less than Object 2 "<<endl ;
    }
    else
    {
        cout<<"Object 2 is Less than Object 1 "<<endl ;
    }
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
    num1<num2 ;
    return 0;
}

