#include<iostream>
#include<vector>
#include<unordered_map>

std::vector<int> twoSum(std::vector<int> &nums,int target){
    std::vector<int> result;
    std::unordered_map<int,int> myMap;
    for(int i=0;i<nums.size();i++){
        int x = target - nums[i];
        if(myMap.find(x) != myMap.end()){
            result.push_back(i);
            result.push_back(myMap[x]);
            return result;
        }
        myMap.insert(std::make_pair(nums[i],i));
    }
    return result;
}

int main(){
    std::cout<<"Problem 1 : Two Sum "<<std::endl;
    int n;
    std::cin>>n;
    std::vector<int> vec(n);
    for(int i=0;i<n;i++){
        std::cin>>vec[i];
    }
    int target;
    std::cin>>target;
    std::vector<int> result = twoSum(vec,target);
    for(auto i : result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}