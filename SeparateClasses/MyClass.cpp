#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b) {

}

MyClass::~MyClass() {
    cout << "Destructor" << endl;
}

void MyClass::myPrint() {
    cout << regVar << endl;
}

int main() {
    MyClass obj(42, 33);
    obj.myPrint();
    getRegVar(obj);
}