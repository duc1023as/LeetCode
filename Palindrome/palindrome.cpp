#include<iostream>
#include<string>

bool isPalindrome(int x) {
    std::string temp_str,reverse;
    temp_str = std::to_string(x);
    for(int i=temp_str.size()-1;i>=0;i--){
        reverse.push_back(temp_str[i]);
    }
    if(temp_str==reverse){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number;
    std::cin>>number;
    std::cout<<"Number: "<<number<<std::endl;
    std::cout<<isPalindrome(number);
    return 0;
}