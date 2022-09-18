//
// Created by USER on 18/09/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <sstream>

class Solution {
public:
    std::string decodeMessage(std::string key, std::string message) {
        std::string decoded="";
        std::unordered_map<char,char> dict;
        int i=0;
        for(auto k : key) {
            if (k!=' ' && !dict[k]) {
                dict[k] = 'a' + i;
                i++;
                if(i==26) break;
                std::cout << k << " " << dict[k] << std::endl;
            }
        }
        dict[' ']=' ';
        for(auto m : message)
            decoded.append(1,dict[m]);
        return decoded;
    }
};

int main(){
    std::string key("the quick brown fox jumps over the lazy dog"), message("vkbs bs t suepuv");
    Solution ans;
    std::cout << ans.decodeMessage(key,message) << std::endl;
    return 0;
}