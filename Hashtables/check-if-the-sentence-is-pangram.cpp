//
// Created by USER on 17/11/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <bitset>

class Solution {
public:
    bool checkIfPangram(std::string s) {
        std::unordered_map<char,bool> h;
        for(int i=0;i<s.size();i++) h[s[i]]=true;
        bool res=true;
        for(int i=0;i<26;i++)
            res&=h['a'+i];
        return res;
    }

    bool checkIfPangram2(std::string s){
        std::bitset<26> res(0);
        //unsigned int res=0;
        for(int i=0;i<s.size();++i){
            if(s[i] != ' ')
                res.set(s[i]-'a');
            //res|=temp;
            //std::cout << s[i] << " " << s[i]-'a' << " " << res << std::endl;
        }
        std::bitset<26> check(0);
        check.set();
        return res == check;
    }

    bool checkIfPangram3(std::string s){
        std::set<char> cnt;
        for (auto c : s) {
            cnt.insert(c);
        }
        ///for(auto c: cnt)
           // std::cout << c << std::endl;
        if(cnt.find(' ') != cnt.end())
            return cnt.size() == 27;
        else
            return cnt.size() == 26;
    }
};

int main(){
    std::string sen("the quick brown fox jumps over the lazy dog");
    Solution ans;
    std::cout << ans.checkIfPangram3(sen) << std::endl;
    return 0;
}