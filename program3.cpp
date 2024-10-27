#include <iostream>
using namespace std;

class SumOfPositiveNumbers {
private:
    int *arr;
    int size;
    int sum;

public:
    SumOfPositiveNumbers(const int* inputArr, int size) {
        this->size = size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
        sum = calculateSum();
    }

    SumOfPositiveNumbers(const SumOfPositiveNumbers &obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
        sum = obj.sum;
    }

    int calculateSum() {
        int total = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                total += arr[i];
            }
        }
        return total;
    }

    void displaySum() const {
        cout << "The sum of all positive numbers is: " << sum << endl;
    }

    ~SumOfPositiveNumbers() {
        delete[] arr;
    }
};

int main() {
    int arr[] = {1, -3, 5, -2, 8, -7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    SumOfPositiveNumbers obj1(arr, size);

    SumOfPositiveNumbers obj2 = obj1;
    
    obj2.displaySum();

    return 0;
}
