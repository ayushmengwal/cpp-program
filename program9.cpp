#include <iostream>
using namespace std;

class A {
protected:
    int a;

public:
    A(int value) : a(value) {}

    void displayA() const {
        cout << "Value in Class A: " << a << endl;
    }
};

class B : public A {
protected:
    int b;

public:
    B(int valueA, int valueB) : A(valueA), b(valueB) {}

    void displayB() const {
        cout << "Value in Class B: " << b << endl;
    }
};

class C : public A {
protected:
    int c;

public:
    C(int valueA, int valueC) : A(valueA), c(valueC) {}
    void displayC() const {
        cout << "Value in Class C: " << c << endl;
    }
};

class D : public A {
protected:
    int d;

public:
    D(int valueA, int valueD) : A(valueA), d(valueD) {}

    void displayD() const {
        cout << "Value in Class D: " << d << endl;
    }
};

class E : public B {
protected:
    int e;

public:
    E(int valueA, int valueB, int valueE) : B(valueA, valueB), e(valueE) {}

    void displayE() const {
        cout << "Value in Class E: " << e << endl;
    }
};

int main() {
    int valueA, valueB, valueC, valueD, valueE;

    cout << "Enter value for A: ";
    cin >> valueA;
    cout << "Enter value for B: ";
    cin >> valueB;
    cout << "Enter value for C: ";
    cin >> valueC;
    cout << "Enter value for D: ";
    cin >> valueD;
    cout << "Enter value for E: ";
    cin >> valueE;

    B objB(valueA, valueB);
    C objC(valueA, valueC);
    D objD(valueA, valueD);
    E objE(valueA, valueB, valueE);

    objB.displayA();
    objB.displayB();

    objC.displayA();
    objC.displayC();

    objD.displayA();
    objD.displayD();

    objE.displayA();
    objE.displayB();
    objE.displayE();

    return 0;
}
