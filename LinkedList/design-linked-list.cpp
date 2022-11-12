//
// Created by USER on 22/10/2022.
//

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <queue>

class Node{
public:
    int val;
    Node *next;
    Node(int val): val(val), next(nullptr) {}
};

class MyLinkedList2 {
    Node *head, *tail;
    int size;
public:
    MyLinkedList2() {
        head = new Node(-1);
        tail=head;
        size = 0;
    }

    int get(int index) {
        Node *temp = head;
        if(index < size) {
            while (index--)
                temp = temp->next;
            return temp->val;
        }
        else
            return -1;
    }

    void addAtHead(int val) {
        Node *newNode = new Node(val);
        newNode->next = head->next;
        head=newNode;
        size++;
    }

    void addAtTail(int val) {
        Node *newNode = new Node(val);
        tail->next=newNode;
        tail=newNode;
        size++;
    }

    void addAtIndex(int index, int val) {
        if(index < size-1) {
            Node *temp = head;
            while(index--)
                temp = temp->next;
            Node* newNode = new Node(val);
            newNode->next=temp->next;
            temp=newNode;
            delete newNode;
        }
        else if(index==size-1)
            addAtTail(val);
    }

    void deleteAtIndex(int index) {
        Node *temp=head;
        if(index==0){
            head=head->next;
            delete temp;
        }
        else if(index < size){
            if(index == size-1) {
                while (index > 1) {
                    temp = temp->next;
                    index--;
                }
                tail=temp;
                temp=temp->next;
            }
            else
                while (index--) temp = temp->next;
                Node *toRemove=temp->next;
                temp->next=temp->next->next;
                delete toRemove;
        }
    }
};

class MyLinkedList1 {
public:
    std::vector<int> list;
    MyLinkedList1() {
        //list.resize(1000);
    }

    int get(int index) {
        if(index < list.size())
            return list[index];
        else
            return -1;
    }

    void addAtHead(int val) {
        list.insert(list.begin(),val);
    }

    void addAtTail(int val) {
        list.push_back(val);
    }

    void addAtIndex(int index, int val) {
        if(index < list.size())
            list.insert(list.begin()+index,val);
        else if(index == list.size())
            addAtTail(val);
    }

    void deleteAtIndex(int index) {
        if (index < list.size())
            list.erase(list.begin() + index);
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(){
    MyLinkedList2* obj = new MyLinkedList2();
    int index =0, val=1;
    //int param_1 = obj->get(index);
    obj->addAtHead(2);
    obj->addAtTail(3);
    obj->addAtIndex(1,2);
    obj->deleteAtIndex(1);
    //std::cout << obj->pop() << std::endl;
    //std::cout << obj->top() << std::endl;
    //std::cout << obj->empty() << std::endl;
    //int param_2 = obj->pop();
    //int param_3 = obj->top();
    //bool param_4 = obj->empty();
    return 0;
}