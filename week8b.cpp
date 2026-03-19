#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int evaluatePostfix(string postfix){
    stack<int> s;
    char ch;
    for(int i=0;i<postfix.length();i++){
        ch=postfix[i];
        if(isdigit(ch)){
            s.push(ch-'0');
        }
        else{
            int val2=s.top();
            s.pop();
            int val1=s.top();
            s.pop();
            switch(ch){
                case '+': s.push(val1+val2); break;
                case '-': s.push(val1-val2); break;
                case '*': s.push(val1*val2); break;
                case '/': s.push(val1/val2); break;
            }
        }
    }
    return s.top(); 
}    
int main(){
    string postfix;
    cout<<"Enter the postfix expression: ";
    cin>>postfix;
    int result=evaluatePostfix(postfix);
    cout<<"The result of the postfix expression is: "<<result<<endl;
    return 0;
}