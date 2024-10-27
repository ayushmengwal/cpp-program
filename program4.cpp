#include <iostream>
using namespace std;

class SumValues {
public:
    void sum(int a, int b) {
        cout << "Sum of two integers: " << (a + b) << endl;
    }

    void sum(float a, float b) {
        cout << "Sum of two floats: " << (a + b) << endl;
    }

    void sum(char a, char b) {
        cout << "Sum of two chars (ASCII values): " << (a + b) << endl;
    }
};

int main() {
    SumValues sumObj;


    sumObj.sum(5, 10);
    sumObj.sum(3.5f, 2.5f);
    sumObj.sum('A', 'B');

    return 0;
}
