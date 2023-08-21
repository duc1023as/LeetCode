#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

int singleNumber(std::vector<int>& nums){
    std::unordered_map<int,int> myMap;
    for(int i:nums){
        myMap[i]++;
    }
    for(auto z:myMap){
        if(z.second == 1){
            return z.first;
        }
    }
}


int main(){

    return 0;
}