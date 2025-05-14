#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
    private:
        int privateValue = 9;
        string name = "Alice";
        string password = "jdvniwv";
        string privateAccess = "nopeee";
    
    public:
        int publicValue = 2;

        void publicFunction(int a, string phrase) {
            cout << publicValue << endl;
            cout << privateValue << endl;
            cout << a << endl;
            cout << phrase << endl;
        }

        void set(string name, string password, string access) {
            // shadowing, left side name refers to private name
            // right side refers to the parameter name
            // need this->name since both member variable and parameter are same
            // we can remove this-> if they are named differently
            this->name = name;
            this->password = password;
            privateAccess = access;
        }
        void get() {
            cout << name <<" "<< password <<" "<< privateAccess << endl;
        }
};

int main() {

    MyClass obj;

    //obj.publicValue = 10; changing a public value accessable outside the class

    //cout << obj.privateValue << endl; -> wont print since it is private to the class
    //cout << obj.publicValue << endl;

    //obj.publicFunction(999, "brooo"); // prints the private value as it is used in a public function
    
    obj.get(); // -> prints private name & password
    obj.set("Tom", "skjfvna", "yeah sure"); // -> set new name & password
    obj.get(); // -> prints the new name & password
    
    return 0;
}
