#include<iostream>
using namespace std;
class Student{
    int roll;
    float marks;
    public:
    // Default constructor
    Student(){
        roll = 0;
        marks =0;
    }
    // Constructor with one parameter
    Student (int r){
        roll = r;
        marks = 0;
    }
    // Constructor with two parameters
    Student (int r,float m){
        roll =r;
        marks=m;
    }
    void display(){
        cout << "Roll:" << roll << "Marks:" << marks << endl;
    }
};
int main(){
    Student s1;
    Student s2(101);
    Student s3(102,85.5);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}