#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

int singleNumber(std::vector<int>& nums){
    // std::unordered_map<int,bool> myMap;
    // for(int i : nums){
    //     myMap.insert(std::make_pair(i,true));
    // }
    // for(std::unordered_map<int,bool>::iterator it=myMap.begin();it!= myMap.end();it++){
    //     if(std::count(nums.begin(),nums.end(),(*it).first) == 1){
    //         return (*it).first;
    //     }
    // }
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