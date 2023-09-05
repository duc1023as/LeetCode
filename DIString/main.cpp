#include<iostream>
#include<string>
#include<vector>

std::vector<int> diStringMatch(std::string s) {
    int len = s.size();
    int start = 0;
    std::vector<int> ans;
    if(s[0] == 'I'){
        ans.push_back(start);
        ans.push_back(++start);
    }
    else{
        ans.push_back(len);
        ans.push_back(--len);
    }
    for(int i=1;i<s.size();i++){
        if(s[i] == 'I' && s[i-1] == 'I'){
            ans.push_back(++start);
        }
        else if(s[i] == 'I' && s[i-1] == 'D'){
            ans.back()=start;
            ans.push_back(++start);
        }
        else if(s[i] == 'D' && s[i-1] == 'D'){
            ans.push_back(--len);
        }
        else{
            ans.back() = len;
            ans.push_back(--len);
        }
    }
    return ans;
}

int main(){
    std::string myStr;
    std::cin>>myStr;
    std::vector<int> myVec;
    myVec = diStringMatch(myStr);
    for(auto &i : myVec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}