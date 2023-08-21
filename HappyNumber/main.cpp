#include<iostream>
#include<vector>

bool isHappy(int n){
    std::vector<int> vec;
    int sum = 0;
    while(true){
        while(true){
            if(n<10){
                vec.push_back(n);
                break;
            }
            vec.push_back(n%10);
            n /= 10;
        }
        for(int i=0;i<vec.size();i++){
            sum = sum + vec[i]*vec[i];
        }
        if(sum == 1){
            return true;
        }
        if(sum == 4){
            return false;
        }
        n = sum;
        sum = 0;
        vec.clear();
    }
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<isHappy(n);
    return 0;
}