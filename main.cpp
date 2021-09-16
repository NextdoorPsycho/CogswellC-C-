#include <iostream>

using namespace std;

int main() {
    int fib[10];
    fib[0] = 0;
    fib[1] = 1;
    int arrSize = sizeof(fib) / sizeof(fib[0]);


    cout << fib[0] << ", " << fib[1];
    for (int i = 2; i < arrSize; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << ", " << fib[i];
    }
    cout << ".";

    return 0;
}

