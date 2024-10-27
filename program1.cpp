#include <iostream>
using namespace std;

class SumOfNaturalNumbers {
private:
    int n;
    int sum;

public:
    SumOfNaturalNumbers() : n(0), sum(0) {}

    void setNumber() {
        cout << "Enter the value of n: ";
        cin >> n;
        calculateSum();
    }

    void calculateSum() {
        sum = (n * (n + 1)) / 2;
    }

    void displaySum() {
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumOfNaturalNumbers sumObj;
    sumObj.setNumber();
    sumObj.displaySum();
    return 0;
}
