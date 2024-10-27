#include <iostream>
using namespace std;

class BaseNumber1 {
protected:
    int num1;

public:
    BaseNumber1(int a) : num1(a) {}
};

class BaseNumber2 {
protected:
    int num2;

public:
    BaseNumber2(int b) : num2(b) {}
};

class Sum : public BaseNumber1, public BaseNumber2 {
public:
    Sum(int a, int b) : BaseNumber1(a), BaseNumber2(b) {}

    void displaySum() const {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Sum sumObj(a, b);
    sumObj.displaySum();

    return 0;
}
