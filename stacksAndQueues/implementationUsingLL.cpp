#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int x){
        this->val = x;
        this->next = nullptr;
    }
};

class MyStackLL{
private:
    ListNode* t = nullptr;
    int stackSize = 0;

public:

    void push(int x){       //O(1)
        ListNode* temp = new ListNode(x);
        temp->next = t;
        t = temp;
        stackSize++;
    }

    void pop(){             //O(1)
        if(t == nullptr) return;
        ListNode* temp = t;
        t = t->next;
        delete temp;
        stackSize--;
    }
    
    int top(){             //O(1)
        if(t == nullptr) return -1;
        return t->val;
    }

    int size(){             //O(1)
        return stackSize;
    }

    ~MyStackLL(){        //Memory Free Up
        while(t != nullptr) {
            pop();
        }
    }
    
};


class MyQueueLL{
private:
    ListNode* start = nullptr;
    ListNode* end = nullptr;
    int qsize = 0;
public:
    void push(int x){
        ListNode* temp = new ListNode(x);
        if(start == nullptr){
            start = temp;
            end = temp;
        }

        else{
            end->next = temp;
            end = temp;
        }
        qsize++;
        return;
    }

    void pop(){
        if(start == nullptr) return;
        ListNode* temp = start;
        start = start->next;
        if(start == nullptr){ // EdgeCase
            end = nullptr; 
        }
        delete temp;
        qsize--;
        return;
    }

    int top(){
        if(start==nullptr) return -1;
        return start->val;
    }

    int size(){
        return qsize;
    }

    ~MyQueueLL(){
        while(start!=nullptr){
            pop();
        }
    }

};

int main(){

    return 0;
}