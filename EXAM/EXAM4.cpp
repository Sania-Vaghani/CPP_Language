/*Write a Program which illustrates Method Overriding by using three classes*/

#include <iostream>
using namespace std;

class Animal {
   public:
    string name; 
};

class Lion : public Animal {
   public:
    void show() {
    	Animal :: name= "Lion";
        cout << "Hello, I am "<<name<< endl;
    }
};

class Tiger : public Animal {
   public:
    void show() {
    	Animal :: name= "Tiger";
        cout << "Hello, I am "<<name<< endl;
    }
};

int main() {
    Lion l1;
    l1.show();
    Tiger t1;
    t1.show();
    return 0;
}
