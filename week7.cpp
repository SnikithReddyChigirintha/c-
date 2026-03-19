#include<iostream>
using namespace std;

#define SIZE 5

class Stack{
private:
    int top;
    int St[SIZE];

public:
    Stack(){
        top = -1;
    }

    void push(int value){
        if(isfull()){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        St[top] = value;
        cout<<"Element pushed into stack: "<<value<<endl;
    }

    void pop(){
        if(isempty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<"Element popped from stack: "<<St[top]<<endl;
        top--;
    }

    void peek(){
        if(isempty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<"Peek element of stack: "<<St[top]<<endl;
    }

    int isfull(){
        if(top == SIZE-1){
            return 1;
        }
        return 0;
    }

    int isempty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
};

int main(){
    Stack s;
    int choice, value;

    do{
        cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }

    } while(choice != 4);

    return 0;
}