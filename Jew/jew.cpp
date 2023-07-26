#include<iostream>
#include<string>
#include<algorithm>

int numJewelsInStones(std::string jewels, std::string stones) {
    int result = 0;
    for(int i=0;i<jewels.size();i++){
        result += std::count(stones.begin(),stones.end(),jewels[i]);
    }
    return result;
}

int main(){
    std::string jewels,stones;
    std::getline(std::cin,jewels);
    std::getline(std::cin,stones);
    std::cout<<jewels<<" "<<stones<<std::endl;
    std::cout<<numJewelsInStones(jewels,stones)<<std::endl;
    return 0;
}


//found!=std::string::npos