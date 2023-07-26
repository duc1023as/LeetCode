#include<iostream>
#include<string>
#include<vector>

int finalValueAfterOperations(std::vector<std::string>& operations) {
    int result = 0;
    for(int i=0;i<operations.size();i++){
        if(operations[i] == "++X"){
            result++;
        }
        else if(operations[i] == "X++"){
            result++;
        }
        else if(operations[i] == "X--"){
            result--;
        }
        else{
            result--;
        }
    }
    return result;
}

int main(){
    int n;
    std::cin>>n;
    std::cin.ignore();
    std::cout<<"N is: "<<n<<std::endl;
    std::vector<std::string> vec;
    for(int i=0;i<n;i++){
        std::string temp_str;
        std::getline(std::cin,temp_str);
        vec.push_back(temp_str);
    }
    for(auto i:vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<finalValueAfterOperations(vec);
    return 0;
}