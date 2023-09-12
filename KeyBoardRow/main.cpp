#include<iostream>
#include<vector>
#include<string>

std::vector<std::string> findWords(std::vector<std::string>& words) {
    std::string row1 = "qQwWeErRtTyYuUiIoOpP";
    std::string row2 = "aAsSdDfFgGhHjJkKlL";
    std::string row3 = "zZxXcCvVbBnNmM";
    int type;
    std::vector<std::string> ans;
    for(int i=0;i<words.size();i++){
        std::cout<<words[i][0]<<" ";
        if(row1.find(words[i][0]) != std::string::npos){
            type = 1;
            std::string tempt;
            for(int j=0;j<words[i].size();j++){
                if(row1.find(words[i][j]) != std::string::npos){
                    tempt += words[i][j];
                }
                else{
                    tempt.clear();
                    break;
                }
            }
            ans.push_back(tempt);
        }
        else if(row2.find(words[i][0]) != std::string::npos){
            type = 2;
            std::string tempt;
            for(int j=0;j<words[i].size();j++){
                if(row2.find(words[i][j]) != std::string::npos){
                    tempt += words[i][j];
                }
                else{
                    tempt.clear();
                    break;
                }
            }
            ans.push_back(tempt);
        }
        else{
            type = 3;
            std::string tempt;
            for(int j=0;j<words[i].size();j++){
                if(row3.find(words[i][j]) != std::string::npos){
                    tempt += words[i][j];
                }
                else{
                    tempt.clear();
                    break;
                }
            }
            ans.push_back(tempt);
        }
    }
    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
        if(ans[i] == ""){
            std::cout<<ans[i]<<" ";
            ans.erase(ans.begin()+i);
            i -= 1;
        }
    }
    return ans;
}

int main(){
    std::vector<std::string> myVec;
    int n;
    std::cin>>n;
    std::cin.ignore();
    for(int i=0;i<n;i++){
        std::string tempt;
        std::getline(std::cin,tempt);
        myVec.push_back(tempt);
    }
    for(auto &i : myVec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::vector<std::string> ans = findWords(myVec);
    return 0;
}