#include<iostream>
using namespace std;
template <class T>
T findMax (T a,T b) {
    if (a>b)
    return a;
    else 
    return b;
}
int main(){
    cout << "Max of integers:" << findMax(10,20) << endl;
    cout << "Max of floats:" << findMax(5.5f,3.2f) <<endl;
    cout << "Max of Characters:" << findMax('A','Z') << endl;
    return 0;
} 