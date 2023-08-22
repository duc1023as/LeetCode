#include<iostream>
#include<vector>

std::vector<int> leftRightDifference(std::vector<int>& nums) {
    std::vector<int> leftSum(nums.size());
    std::vector<int> rightSum(nums.size());
    std::vector<int> result(nums.size());
    for(int i=0;i<nums.size();i++){
        int sum = 0;
        if(i==0){
            leftSum[i] = 0;
        }
        else{
            for(int j=0;j<i;j++){
                sum+=nums[j];
            }
            leftSum[i] = sum;
        }
    }
    for(int i=nums.size()-1;i>=0;i--){
        int sum = 0;
        if(i==nums.size()-1){
            rightSum[i] = 0;
        }
        else{
            for(int j=nums.size()-1;j>i;j--){
                sum += nums[j];
            }
            rightSum[i] = sum;
        }
    }
    for(int i=0;i<nums.size();i++){
        result.push_back(std::abs(leftSum[i]-rightSum[i]));
    }
    return result;
}

int main(){
    std::vector<int> vec;
    std::vector<int> result;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        std::cin>>temp;
        vec.push_back(temp);
    }
    result = leftRightDifference(vec);
    return 0;
}