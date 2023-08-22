#include<iostream>
#include<vector>
#include<map>

std::string decodeMessage(std::string key, std::string message) {
    std::map<char,char> myMap;
    char a = 'a';
    std::string result;
    for(int i=0;i<key.size();i++){
        if(myMap.find(key[i]) == myMap.end() && key[i] != ' '){
            myMap.insert(std::make_pair(key[i],a++));
        }
    }
    for(auto &i: message){
        std::cout<<myMap[i]<<"\n";
        if(i == ' '){
            result.push_back(' ');
        }
        else{
            result.push_back(myMap[i]);
        }
    }
    return result;
}

int main(){
    std::string str,str1;
    std::getline(std::cin,str);
    std::getline(std::cin,str1);
    std::cout<<str<<"\n"<<str1<<"\n";
    std::string reuslt = decodeMessage(str,str1);
    std::cout<<reuslt;
    return 0;
}