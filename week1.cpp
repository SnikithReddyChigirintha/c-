#include <iostream>
#include <string>
using namespace std;
class student {
private:
    int rollNumber;
    string name;
    float marks;
    //Constructor
public:
    student() {
        rollNumber = 0;
        name = " ";
        marks = 0.0;
    }
    //Paramiterised Constructor
    student(int r, string n, float m) {
        rollNumber = r;
        name = n;
        marks = m;
    }
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display() {
        cout << rollNumber << "\t" << name << "\t" << marks << endl;
    }
    ~student() {
        cout << "Student object with Roll Number " << rollNumber << " is destroyed." << endl;
    }
};
int main() {
    int n;
    cout << "Enter Number of Students: ";
    cin >> n;
    student* students = new student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        students[i].input();
    }
    cout<<"\n******OUTPUT******"<<endl;
    cout << "\nRollNo\tName\tMarks\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }
    delete[] students;   // destructor called for each object
    return 0;
}