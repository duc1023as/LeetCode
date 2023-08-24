#include<iostream>
#include<vector>

std::vector<int> shuffle(std::vector<int>& nums, int n) {
    std::vector<int> ans;
    for(int i=0;i<nums.size()-n;i++){
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
    }
    return ans;
}


int main(){
    std::vector<int> vec,result;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int tempt;
        std::cin>>tempt;
        vec.push_back(tempt);
    }
    result = shuffle(vec,3);
    for(auto &i : result){
        std::cout<<i<<" ";
    }
    return 0;
}