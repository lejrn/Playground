//
// Created by USER on 21/09/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>


struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0;
        for(ListNode *temp = head; temp!=nullptr; temp=temp->next){
            res*=2;
            res+=temp->val;
        }
        return res;
    }
};


int main(){
    std::vector<int> nums{0,2,1,5,3,4}, res;
    ListNode *head= new ListNode(1);
    head->next= new ListNode(1);
    head->next->next = new ListNode(1);
    Solution ans;
    std::cout << ans.getDecimalValue(head) << std::endl;
    return 0;
}