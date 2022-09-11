#include <iostream>
#include <string>

using namespace std;

class mother {

    public:

    void display (){

        int age = 45;
        string name = "Mother Name";

        cout << endl<<endl << "Daugther Detail : "<<endl;
        cout << "Mother Name : " << name << endl;

        cout << "Mother Age : "<< age<<endl;

    }
};

class daugther : public mother {

    public :

    void display (){

        int age = 15;
        string name = "Daugther Name";

        cout << endl<<endl << "Daugther Detail : ";
        cout << endl << "Daugther Name : " << name << endl;

        cout << "Daugther Age : "<< age<<endl;



    }
};


main (){

    daugther info;

    info.mother::display();
    info.display();


}
