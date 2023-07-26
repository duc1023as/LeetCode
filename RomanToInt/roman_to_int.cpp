#include<iostream>
#include<string>
#include<unordered_map>

int romanToInt(std::string s) {
    int result = 0;
    std::unordered_map<char,int> mapRoman;
    mapRoman.insert(std::make_pair('I',1));
    mapRoman.insert(std::make_pair('V',5));
    mapRoman.insert(std::make_pair('X',10));
    mapRoman.insert(std::make_pair('L',50));
    mapRoman.insert(std::make_pair('C',100));
    mapRoman.insert(std::make_pair('D',500));
    mapRoman.insert(std::make_pair('M',1000));
    for(int i=0;i<s.size();i++){
        if(s[i] == 'I' && s[i+1] == 'V'){
            result += 4;
            i++;
        }
        else if(s[i] == 'I' && s[i+1] == 'X'){
            result += 9;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] == 'L'){
            result += 40;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] == 'C'){
            result += 90;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] == 'D'){
            result += 400;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] == 'M'){
            result += 900;
            i++;
        }
        else{
            result = result + mapRoman[s[i]];
        }
    }
    return result;
}

int main(){
    std::string str;
    std::getline(std::cin,str);
    std::cout<<str<<std::endl;
    std::cout<<romanToInt(str);
    return 0;
}