// Practical 10 OOps Lab 
/*
   Task 2 : Pointer to Objects in C++
   WAP to create print or display Student information containing in Student class 
   by using pointers to object.
*/
#include <iostream>
#include <cstring>
using namespace std ;
class Students
{
    public :
      string name ;
      int roll ;
      int marks ;
      void getdetails()
      {
          cout<<"Enter Name     : " ;
          cin>>name ;
          cout<<"Enter Roll No. : " ;
          cin>>roll;
          cout<<"Enter Marks    : " ;
          cin>>marks ;
          cout<<endl ;
      }
      void show()
      {
          cout<<"Enter Name     : "<<name<<endl;
          cout<<"Enter Roll No. : "<<roll<<endl ;
          cout<<"Enter Marks    : "<<marks<<endl ;
          cout<<endl ;
      }
};

int main()
{
    cout<<"\t\t Akash Yadav 200111076 A \n\n" ;
    int n , i ;
    cout<<"Enter No. of Students : " ;
    cin>>n ;
    Students stu1[n] ; // Obect of Class ABC
    Students *ptr ; 
    ptr = stu1; // Pointer to object 
    for(i=0;i<n;i++)
    {
        (ptr+i)->getdetails() ; 
    }
    cout<<"\n\t\t Student  Details \n\n" ;
    for(i=0;i<n;i++)
    {
        (ptr+i)->show() ; 
    }
    
    return 0;
}
