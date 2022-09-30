//
// Created by USER on 22/09/2022.
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

class MyHashSet {
    int m;
public:
    MyHashSet() {
        int **arr = new int*[1<<15];
    }

    int Hashfunc(int key){
        return ((key*1031237) & (1 << 20)) >> 5
    }

    void add(int key) {
        int t=Hashfunc(key);
        //if(arr[key].)
    }

    void remove(int key) {

    }

    bool contains(int key) {

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