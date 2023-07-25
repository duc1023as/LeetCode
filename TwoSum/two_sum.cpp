#include<iostream>
#include<vector>

std::vector<int> twoSum(std::vector<int> &nums,int target){
    std::vector<int> result;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] + nums[j] == target){
                result.push_back(i);
                result.push_back(j);
            }
        }
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