#include<iostream>

int addDigits(int num) {
    int sum = 0;
    while(true){
        while(num){
            sum += (num%10);
            num /= 10;
        }
        if(sum >= 0 && sum <10){
            return sum;
        }
        num = sum;
        sum = 0;
    }
    return sum;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<addDigits(n);
    return 0;
}