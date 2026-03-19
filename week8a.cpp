#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int priority(char ch){
    if(ch=='+'||ch=='-')
    return 1;
    if(ch=='*'||ch=='/')
    return 2;
    if(ch=='^')
    return 3;
    return 0;
}
string infixToPostfix(string infix){
        string postfix="";
        stack<char> s;
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        if(isalnum(ch)){
            postfix+=ch;
        } 
        else if(ch=='('){
            s.push(ch);
        }
        else if(ch==')'){
            while(!s.empty()&&s.top()!='('){
                postfix+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty()&&priority(s.top())>=priority(ch)){
                postfix+=s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    return postfix;
}
int main(){
    string infix;
    cout<<"Enter the infix expression: ";
    cin>>infix;
    string postfix=infixToPostfix(infix);
    cout<<"The postfix expression is: "<<postfix<<endl;
    return 0;
}