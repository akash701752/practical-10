// Practical 10 OOps Lab 
/*
   Task 1 : Array of Objects in C++
   WAP to create a directory that contains the following information.
   (a) Name of a person
   (b) Address
   (c) Telephone Number (if available with STD code)
   (d) Mobile Number (if available)
   (e) Head of the family
*/
#include <iostream>
#include <cstring>
using namespace std ;
struct directory
{
    string name ;
    string address ;
    string telephone ;
    long int mobile ;
    string head ;
};

int main()
{
    cout<<"\t\t Akash Yadav 200111076 A \n\n" ;
    int n , i ;
    cout<<"How Many Directories you want to Enter : " ;
    cin>>n ;
    directory dir[n] ; // Array to Obect
    for(i=0;i<n;i++)
    {
        cout<<"Enter Name of Person "<<i+1<<" : " ;
        cin>>dir[i].name ;
        cout<<"Enter Address : " ;
        cin>>dir[i].address ;
        cout<<"Enter Telephone No. : " ;
        cin>>dir[i].telephone ;
        cout<<"Enter Mobile No. : " ;
        cin>>dir[i].mobile ;
        cout<<"Enter Head of the Family : " ;
        cin>>dir[i].head ;
        cout<<"\n" ;
    }
    cout<<"\n\t\t Directories  Details \n\n" ;
    for(i=0;i<n;i++)
    {
        cout<<"Name of Person "<<i+1<<" : " <<dir[i].name <<endl;
        cout<<"Address : " <<dir[i].address <<endl;
        cout<<"Telephone No. : "<< dir[i].telephone <<endl;
        cout<<"Mobile No. : " <<dir[i].mobile <<endl ;
        cout<<"Head of the Family : "<<dir[i].head <<endl ;
        cout<<"\n" ;
    }
    return 0;
}
