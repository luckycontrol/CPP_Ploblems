#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
    public:
        MyClass(int a, int b);

        ~MyClass();

        void myPrint();
    
    private:
        int regVar;
        
        const int constVar;
    
    protected:

    friend void getRegVar(MyClass &obj);
};

void getRegVar(MyClass &obj) {
    obj.regVar = 42;
    cout << obj.regVar << endl;
}

#endif