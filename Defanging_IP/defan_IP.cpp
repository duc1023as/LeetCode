#include<iostream>
#include<string>

std::string defangIPaddr(std::string address) {
    for(int i=0;i<address.size();i++){
        if(address[i] == '.'){
            address.insert(i,"[.]");
            std::cout<<"i: "<<i<<std::endl;
            address.erase(i+3,1);
            i+=3;
        }
    }
    return address;
}

int main(){
    std::string str1;
    std::getline(std::cin,str1);
    std::cout<<defangIPaddr(str1)<<std::endl;
    return 0;
}