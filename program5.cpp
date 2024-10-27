#include <iostream>
using namespace std;

class Numbers {
protected:
    int num1, num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    int getProduct() const {
        return num1 * num2;
    }
};

class Product : public Numbers {
public:
    Product(int a, int b) : Numbers(a, b) {}

    void displayProduct() const {
        cout << "The product of " << num1 << " and " << num2 << " is: " << getProduct() << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Product prod(a, b);
    prod.displayProduct();

    return 0;
}
