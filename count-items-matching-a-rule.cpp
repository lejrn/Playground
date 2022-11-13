//
// Created by USER on 13/11/2022.
//
#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <stack>


class Solution {
public:
    int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
        int i;
        if(ruleKey=="type")
            i=0;
        else if(ruleKey=="color")
            i=1;
        else if(ruleKey=="name")
            i=2;
        int count =0;
        for(int j=0;j<items.size();++j){
            if(items[j][i]==ruleValue)
                count++;
        }
        return count;
    }
};

int main(){
    Solution ans;
    std::vector<std::vector<std::string>> items{{"phone","blue","pixel"}, {"computer","silver","phone"}, {"phone","gold","iphone"}};
    std::string ruleKey = "color", ruleValue = "silver";
    std::cout << ans.countMatches(items,ruleKey,ruleValue) << std::endl;
    return 0;
}