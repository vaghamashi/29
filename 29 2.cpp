#include <iostream>
#include <string>

using namespace std;

class animal {

    public: 

    int age;
    string name,found;


};

class zebra : public animal {


    public :

    void Zebra  (){
        
        age=8;
        name="Zebra";
        found="Africa";

    cout<<"animal Name : "<<name;
    cout<<endl<<"Animal Age : "<<age;
    cout << endl << "Animal Found : "<<found;
    
    }

};

class dolphin  : public animal{

    public :

    void Dolphin () {
    
    age = 15;
    name="Dolphin";
    found="Ganges river (India)";

    cout <<"animal Name : "<<name;
    cout<<endl<<"Animal Age : "<<age;
    cout << endl << "Animal Found : "<<found;}

};

main (){

    dolphin info_d;
    zebra info_z;

     info_z.Zebra();
     cout<<endl<<endl;
     info_d.Dolphin();
    



}
