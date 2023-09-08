#include<iostream>
#include<vector>

int distMoney(int money, int children) {
    if(money < children) return -1;
    money -= children;
    std::vector<int> myVec(children,1);
    for(int i=0;i<children;i++){
        money -= 7;
        if(money >= 0){
            myVec[i] += 7;
        }
        else{
            myVec[i] += (money+7);
            break;
        }
    }
    int count = 0;
    for(int i=0;i<myVec.size();i++){
        if(myVec[i] == 4 && i!=0){
            myVec[i]--;
            myVec[i-1]++;
        }
    }
    for(auto &i : myVec){
        if(i == 8){
            count++;
        }
    }
    return count;
}

int main(){
    int money,children;
    std::cin>>money>>children;
    std::cout<<distMoney(money,children);
    return 0;
}