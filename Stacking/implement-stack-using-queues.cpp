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

class MyStack {
public:
    std::queue<int> q;
    MyStack() {
    }

    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;++i){
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int top_element=top();
        q.pop();
        return top_element;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main(){
    MyStack* obj = new MyStack();
    obj->push(2);
    std::cout << obj->pop() << std::endl;
    std::cout << obj->top() << std::endl;
    std::cout << obj->empty() << std::endl;
    //int param_2 = obj->pop();
    //int param_3 = obj->top();
    //bool param_4 = obj->empty();
    return 0;
}