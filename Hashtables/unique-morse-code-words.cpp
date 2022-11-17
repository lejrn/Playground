//
// Created by USER on 18/11/2022.
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


// ".-";"-...";"-.-.";"-..";".";"..-.";"--.";"....";"..";".---";"-.-";".-..";"--";"-.";"---";".--.";"--.-";".-.";"...";"-";"..-";"...-";".--";"-..-";"-.--";"--.."

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::unordered_map<char,std::string> dic;
        dic['a']=".-";
        dic['b']="-...";
        dic['c']="-.-.";
        dic['d']="-..";
        dic['e']=".";
        dic['f']="..-.";
        dic['g']="--.";
        dic['h']="....";
        dic['i']="..";
        dic['j']=".---";
        dic['k']="-.-";
        dic['l']=".-..";
        dic['m']="--";
        dic['n']="-.";
        dic['o']="---";
        dic['p']=".--.";
        dic['q']="--.-";
        dic['r']=".-.";
        dic['s']="...";
        dic['t']="-";
        dic['u']="..-";
        dic['v']="...-";
        dic['w']=".--";
        dic['x']="-..-";
        dic['y']="-.--";
        dic['z']="--..";

        std::set<std::string> ocr;
        for(auto w : words){
            std::string temp("");
            for(int i=0;i<w.size();++i){
                temp.append(dic[w[i]]);
            }
            std::cout << temp << std::endl;
            ocr.insert(temp);
        }
        return ocr.size();
    }
};

int main(){
    std::vector<std::string> words{"noilq","kzlq","ydreq","ybxk","kzlq"};
    Solution ans;
    std::cout << ans.uniqueMorseRepresentations(words) << std::endl;
    return 0;
}