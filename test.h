#ifndef CLASS_h
#define CLASS_h

#include <iostream>

using namespace std;

class Class {
    public:
        virtual void attack() = 0;
};

class Warrior: public Class {
    public:
        void attack() {
            cout << "Warrior attack!" << endl;
        }
};

class Acher: public Class {
    public:
        void attack() {
            cout << "Acher attack!" << endl;
        }
};

#endif

#ifndef TYPE_H
#define TYPE_H

template <class T>
T sum(T a, T b) {
    return a + b;
}

template <class T>
T mul(T a, T b) {
    return a * b;
}

template <class T>
T sub(T a, T b) {
    return a - b;
}

template <class T>
T div(T a, T b) {
    return a / b;
}

#endif