#include <iostream>
using namespace std;
class Factorial {
    int n;
public:
    Factorial(int x) {
        n = x;
    }
    long long findFactorial() {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial obj(num);
    cout << "Factorial of Number is: " << obj.findFactorial() << endl;
    return 0;
}