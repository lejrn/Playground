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
    std::string restoreString(std::string s, std::vector<int>& indices) {
        std::string res = s;
        for(int i=0;i<indices.size();++i)
            //res.append(s.begin()+indices[i],s.begin()+indices[i]+1);
            //res.append(s,indices[i],1); // p of string , index , length
            res[indices[i]]=s[i]; // Better notice the swapping rather than the appending, these give different results
        return res;
    }
};

int main(){
    Solution ans;
    std::vector<int> indices{4,5,6,7,0,2,1,3};
    std::string s = "codeleet";
    std::cout << ans.restoreString(s,indices) << std::endl;

    //for(auto r : res)
     //   std::cout << r << std::endl;
    return 0;
}