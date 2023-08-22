#include<iostream>
#include<vector>

void duplicateZeros(std::vector<int>& arr) {
    std::vector<int> vec = arr;
    for(int i =0 ;i<vec.size();i++){
        if(vec[i] == 0){
            std::cout<<"Hi\n";
            vec.insert(vec.begin()+i,0);
            i++;
        }
    }
    for(int i=0;i<arr.size();i++){
        arr[i] = vec[i];
    }
}

int main(){
    std::vector<int> vec;
    for(int i=0;i<6;i++){
        int tempt;
        std::cin>>tempt;
        vec.push_back(tempt);
    }
    duplicateZeros(vec);
    for(auto &i: vec){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    return 0;
}