#include<iostream>
#include<string>
#include<vector>

std::string toGoatLatin(std::string sentence) {
    std::string ans;
    int start = 0;
    int end = 0;
    std::vector<std::string> tempt;
    for(int i=0;i<sentence.size();i++){
        if(sentence[i] == ' '){
            end = i-1;
            tempt.push_back(sentence.substr(start,end-start+1));
            start = i+1;
        }
        if(i == sentence.size()-1){
            end = i;
            tempt.push_back(sentence.substr(start,end-start+1));
            start = i+1;
        }
    }
    for(int i=0;i<tempt.size();i++){
        if(tempt[i][0] == 'a' || tempt[i][0] == 'A' ||tempt[i][0] == 'e' ||tempt[i][0] == 'E' ||tempt[i][0] == 'i' 
        ||tempt[i][0] == 'I' ||tempt[i][0] == 'o' ||tempt[i][0] == 'O' ||tempt[i][0] == 'u' ||tempt[i][0] == 'U'){
            tempt[i] += "ma";
            for(int k=0;k<=i;k++){
                tempt[i].push_back('a');
            }
        }
        else{
            char tempt_char = tempt[i][0];
            tempt[i].erase(0,1);
            tempt[i].push_back(tempt_char);
            tempt[i] += "ma";
            for(int k=0;k<=i;k++){
                tempt[i].push_back('a');
            }
        }
    }
    for(auto &i : tempt){
        ans += i;
        ans.push_back(' ');
    }
    ans.pop_back();
    return ans;
}

int main(){
    std::string myStr;
    std::getline(std::cin,myStr);
    std::cout<<toGoatLatin(myStr);
    return 0;
}