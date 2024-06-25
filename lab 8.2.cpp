#include <iostream>

bool isFibonacci(int index) {
    if (index == 0 || index == 1) return true;

    int a = 0, b = 1;
    int fib = a + b;

    while (fib <= index) {
        if (fib == index) return true;
        a = b;
        b = fib;
        fib = a + b;
    }
    return false;
}

int main() {

    const int n = 30;
    double array[n] = {
        0.5, -1.2, 3.4, 2.2, 5.5, 8.3, 13.2, 21.1, -5.7, 9.0,
        11.1, -12.2, 15.3, -17.4, 19.5, 20.6, -21.7, 22.8, 24.9, -25.0,
        26.1, 27.2, -28.3, 29.4, -30.5, 31.6, 32.7, -33.8, 34.9, 35.0
    };


    double sum = 0;
    int count = 0;


    for (int i = 0; i < n; ++i) {
        if (isFibonacci(i)) {
            sum += array[i];
            ++count;
        }
    }


    double average = (count > 0) ? (sum / count) : 0;


    std::cout << "Arithmetic mean of elements at Fibonacci indices: " << average << std::endl;

    return 0;
}
