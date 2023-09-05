#include<iostream>
#include<vector>

bool canBeIncreasing(std::vector<int>& nums) {
    if(nums.size() == 2) return true;
    bool result = false;
    for(int i=0;i<nums.size();i++){
        int tempt = nums[i];
        nums.erase(nums.begin()+i);
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j] >= nums[j+1]){
                result = false;
                break;
            }
            else{
                result = true;
            }
        }
        if(result) return true;
        nums.insert(nums.begin()+i,tempt);
    }
    return result;
}

int main(){
    std::vector<int> vec;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int tempt;
        std::cin>>tempt;
        vec.push_back(tempt);
    }
    std::cout<<canBeIncreasing(vec)<<std::endl;
    return 0;
}