#include <iostream>

using namespace std;

class user{

    public : 

    int a;

    int getData (){

        cout << "Enter The Value of A : ";
        cin >> a;
        return a;
    }
};


class Square : public user{

    public : 

    void square (){

        cout << "Square of A is "<< a*a<<endl;

        this -> a=a/2;

    }



};
class Cube:public user{

    public : 

    void cube (){

        cout << "Cube of A is "<<a*a*a;
    }

};

int main(int argc, char const *argv[])
{
    Square two;
    Cube three;

    two.getData();//class_name(three).getData();
    two.square();
    // three.getData();
    three.cube();


    return 0;
}
