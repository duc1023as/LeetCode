#include<iostream>
#include<string>
#include<stack>


bool isValid(std::string s) {
    std::stack<char> myStack;
    for(auto &i:s){
        if(i == '{' || i == '(' || i == '['){
            myStack.push(i);
        }
        else{
            if(!myStack.empty() && ((myStack.top() == '{' && i == '}') || (myStack.top() == '(' && i == ')') || (myStack.top() == '[' && i == ']') ) ){
                myStack.pop();
            }
            else{
                return false;
            }
        }
    }
    return myStack.empty();
}

int main(){
    std::string str;
    std::getline(std::cin,str);
    std::cout<<str<<std::endl;
    std::cout<<isValid(str)<<std::endl;
    return 0;
}