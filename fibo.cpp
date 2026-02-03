#include <iostream>
using namespace std;
class Fibonacci {
private:
    int n;
public:
    Fibonacci(int num) {
        n = num;
    }
    void showSeries() {
        int a = 0, b = 1, c;
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    ~Fibonacci() {
        cout << "Destructor called. Object destroyed.\n";
    }
};
int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    Fibonacci f(n);
    f.showSeries();
    return 0;
}