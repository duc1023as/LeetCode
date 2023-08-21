#include<iostream>
#include<string>
#include<unordered_map>

std::string interpret(std::string command){
    std::string result;
    for(int i=0;i<command.size();i++){
        if(command[i] == 'G'){
            result.push_back('G');
        }
        else if(command[i] == '(' && command[i+1] == ')'){
            result.push_back('o');
        }
        else if(command[i] == '(' && command[i+1] == 'a'){
            result.push_back('a');
            result.push_back('l');
        }
    }
    return result;
}

int main(){
    std::string str;
    std::getline(std::cin,str);
    std::cout<<interpret(str)<<"\n";
    return 0;
}