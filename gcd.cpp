#include <iostream>
using namespace std;
class GCD {
private:
    int a, b;
public:
    GCD(int n1,int n2){
        a=n1;
        b=n2;
    }
    int calculate(){
        int n1=a;
        int n2=b;
        while(n2!=0)
        {
           int temp=n2;
           n2=n1%n2;
           n1=temp;
        }
        return a;
    }
};
int main(){
    int x,y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    GCD gcdobj(x,y);
    int result= gcdobj.calculate();
    cout << "GCD of" << x << "and" << y << "is:" << result <<endl;
    return 0;
}