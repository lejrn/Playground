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
    ListNode* middleNode(ListNode* head) {
        int i=0;
        for(ListNode* temp=head; temp!=nullptr;temp=temp->next,i++); // O(n)
        for(int j=0;j<i/2;j++) head=head->next; // O(n/2)
        return head;
    }

    ListNode* middleNode2(ListNode* head){
        ListNode *once=head,*twice=head;
        while(twice!=nullptr && twice->next!=nullptr){ // O(n/2) (Because it traverses the whole list by two steps at time until the end, by which it also finds the middle
            once=once->next;
            twice=twice->next->next;
        }
        return once;
    }
};

int main(){
    ListNode *head= new ListNode(1);
    head->next= new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution ans;
    for(ListNode *temp=ans.middleNode2(head);temp!=nullptr;temp=temp->next)
        std::cout << temp->val;
    std::cout << std::endl;
    return 0;
}