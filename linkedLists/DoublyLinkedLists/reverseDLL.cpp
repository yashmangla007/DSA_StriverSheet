#include<bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode* next;
    ListNode* prev;

    ListNode(int x, ListNode* n): data(x), prev(nullptr), next(n) {}
    ListNode(int x): data(x), prev(nullptr), next(nullptr) {}

};

ListNode* convertToArray(vector<int> &arr){
    
    if(arr.empty()) return nullptr;

    ListNode* head = new ListNode (arr[0]);
    ListNode* move = head;
    
    for(int i=1; i<arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        move->next = temp;
        temp->prev = move;
        move= temp;
    }
    return head;
}

ListNode* reverseDLL(ListNode* head){
    ListNode* temp = head;
    ListNode* ptrTemp;
    ListNode* last;
    while(temp!=nullptr){
        last = temp;
        ptrTemp = temp->next;
        temp->next = temp->prev;
        temp->prev = ptrTemp;
        temp = ptrTemp;

    }
    return last;
}

int main(){
 
    vector<int> arr = {2, 6, 3, 7, 80, 12, 42};
    ListNode* head = convertToArray(arr);
    head = reverseDLL(head);

    ListNode* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}