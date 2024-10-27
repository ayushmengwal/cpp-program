#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;

public:
    SwapNumbers(int x, int y) : a(x), b(y) {}

    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    SwapNumbers swapObj(num1, num2);
    
    swapObj.swap();
    
    swapObj.display();

    return 0;
}
