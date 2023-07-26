#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string result;
    int count =0;
    for(int i=0;i<strs[0].size();i++){
        for(int j=1;j<strs.size();j++){
            if(strs[0][i] == strs[j][i]){
                count++;
            }
            else{
                return result;
            }
        }
        if(count == strs.size()-1){
            result.push_back(strs[0][i]);
        }
        count = 0;
    }
    return result;
}

int main(){
    std::vector<std::string> vec;
    int n;
    std::cin>>n;
    std::cin.ignore();
    for(int i=0;i<n;i++){
        std::string str;
        std::cin>>str;
        vec.push_back(str);
    }
    for(auto &i: vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<longestCommonPrefix(vec)<<std::endl;
    return 0;
}