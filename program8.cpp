#include <iostream>
using namespace std;

class Numbers {
protected:
    int num1, num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}
};

class DisplayFirst : public Numbers {
public:
    DisplayFirst(int a, int b) : Numbers(a, b) {}

    void displayFirstNumber() const {
        cout << "The first number is: " << num1 << endl;
    }
};

class DisplaySecond : public Numbers {
public:
    DisplaySecond(int a, int b) : Numbers(a, b) {}

    void displaySecondNumber() const {
        cout << "The second number is: " << num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    DisplayFirst obj1(a, b);
    DisplaySecond obj2(a, b);

    obj1.displayFirstNumber();
    obj2.displaySecondNumber();

    return 0;
}
