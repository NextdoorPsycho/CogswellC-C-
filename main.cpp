#include <iostream>
using namespace std;

//bad convention globals
int num1 = 0;
int num2 = 1;
int Product;
int num;

// Could move this into a header file but for your ease, i have it all in one
void funcFib(int segment) {
    //this could have been a while function, using num, im just lazy
    if (segment > 0) { // segment iter
        Product = num1 + num2;
        num1 = num2;
        num2 = Product;
        if (segment + num - 1 == num) { // check if its the last iteration
            cout << Product << ". ";
        } else // any other iteration
            cout << Product << ", ";
        funcFib(segment - 1); //segment caller
    }
}


// Actual code
int main() {
    cout << "Enter the number of sequences: ";
    cin >> num;
    cout << "0, " << "1, "; // this skips the first 2 in declaration
    funcFib(num - 2);
    return 0;
}

