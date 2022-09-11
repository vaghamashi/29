#include <iostream>
#include <string>

using namespace std;

class A {

    public:

    int id,salary,experience,contact;
    string name,role,comp_name,address,email;

    

    void getData(){

        cout << "Enter Your ID : ";
        cin >> id;

        cout << "Enter Your Name : ";
        cin >> name;

        cout << "Enter Your Role :";
        cin >> role;

    }

};

class B:public A {

    public :

    void getData (){

        cout << "Enter Your salary : ";
        cin >> salary;

        cout << "Enter Your Experience : ";
        cin >> experience;

    }
};

class C:public B{

    public :

    void getData(){

        cout <<  "Enter Your company name : ";
        cin >> comp_name;

        cout << "Enter Your Address : ";
        cin >> address;


    }


    void putData(){

        cout<<"Your Name : "<< name <<endl;
        cout<<"Your Role : "<<role<<endl;
        cout<<"Your Salary : "<<salary<<endl;
    }
};

class D : public C {

    public : 

    void getData(){

        cout << "Enter Your Email : ";
        cin >> email;

        cout << "Enter Your Contact : ";
        cin >> contact;


    }

    void putData(){


    

    cout << "Your ID : "<< id<<endl;
    cout << "Your Exprience : "<<experience<<endl;

    cout << "Your Company Name : "<<comp_name<<endl;

    cout << "Your Address : "<<address<<endl;

    cout << "Your Email : "<< email<<endl;

    cout << "Your Contact : "<<contact<<endl;
    };
};

main (){

    D info ;

    info.A::getData();
    info.B::getData();
    info.C::getData();
    info.D::getData();

    cout << endl <<endl <<"Employee Record : "<<endl<<endl; 
    
    info.C::putData();
    info.D::putData();

}


