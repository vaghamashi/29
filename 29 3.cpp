#include <iostream>
#include <string>

using namespace std;
 
 

 class A{

 public :

   int id,salary,contact,email;

   void GetData (){

      cout << "Enter Employee ID : ";
      cin >> id;

      cout << "Enter Employee Salary : ";
      cin >> salary;

      cout << "Enter Employee Contact : ";
      cin >> contact;

      cout << "Enter Employee Email : ";
      cin >> email;


   }
 
 };

 class B{

    public :
    
    string name,location;

    void GetData (){

      cout << "Enter Employee Name : ";
      cin >> name;

      cout << "Enter Employee Location : ";
      cin >> location;


    }

   
 
 };

 class c:public A,public B{

    public:

    void PutData (){

      cout << "Employee Record : "<<endl<<endl;

      //class A
      
      cout << "Employee ID : "<<id<<endl;

      cout << "Employee Salary : "<<salary<<endl;

      cout << "Employee Contact : "<<contact<<endl;

      cout << "Employee Email : "<<email<<endl;

      //class B

      cout << "Employee Name : " << name<<endl;

      cout << "Employee Location : " << location<<endl;





    }

    
    
 };

 int main(int argc, char const *argv[])
 {
    c info;

    info.A::GetData();
    info.B::GetData();
    info.PutData();

    return 0;
 }
 
