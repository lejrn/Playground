//
// Created by USER on 21/09/2022.
//

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
    ListNode* reverseList(ListNode* head) {
        // Three pointers that iterate together over the linked list, they move forward and switch over the next-pointers
        ListNode *current=head,*previous=nullptr;
        while(current!= nullptr){
            ListNode *tail=current->next; // Increment left
            current->next=previous; // Flipping direction
            previous=current; // Increment
            current=tail; // Increment
        }
        head=previous;
        return head;
    }

    void print(ListNode* root){
        for(ListNode *temp=root;temp!=nullptr;temp=temp->next) std::cout << temp->val;
        std::cout << std::endl;
    }
};


int main(){
    ListNode *head= new ListNode(1);
    head->next= new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    Solution ans;
    for(ListNode *temp=ans.reverseList(head);temp!=nullptr;temp=temp->next)
        std::cout << temp->val;
    std::cout << std::endl;
    return 0;
}