#include <iostream>
using namespace std;

class BaseNumber {
protected:
    int num1;

public:
    BaseNumber(int a) : num1(a) {}
};

class DerivedNumber1 : public BaseNumber {
protected:
    int num2;

public:
    DerivedNumber1(int a, int b) : BaseNumber(a), num2(b) {}
};

class DerivedNumber2 : public DerivedNumber1 {
public:
    DerivedNumber2(int a, int b) : DerivedNumber1(a, b) {}

    void displaySum() const {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    DerivedNumber2 sumObj(a, b);
    sumObj.displaySum();

    return 0;
}
