#include <iostream>
using namespace std;
class Prime {
private:
    int num;
public:
    Prime(int n) {
        num = n;
    }
    void checkPrime() {
        if (num <= 1) {
            cout << num << " is not a prime number.\n";
            return;
        }
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                cout << num << " is not a prime number.\n";
                return;
            }
        }
        cout << num << " is a prime number.\n";
    }
    ~Prime() {
        cout << "Object destroyed.\n";
    }
};
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Prime p(n);
    p.checkPrime();
    return 0;
}