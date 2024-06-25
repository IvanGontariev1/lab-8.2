#include <iostream>

int main() {

    const int n = 5;
    double array[n] = { 1.5, -2.3, 3.7, -4.5, 5.1 };


    double sum_positive = 0;
    double product = 1;


    for (int i = 0; i < n; ++i) {
        if (array[i] > 0) {
            sum_positive += array[i];
        }
        product *= array[i];
    }


    std::cout << "Sum of positive elements: " << sum_positive << std::endl;
    std::cout << "Product of all elements: " << product << std::endl;

    return 0;
}
