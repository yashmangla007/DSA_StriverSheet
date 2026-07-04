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
//==============================================================================================================
ListNode* removeHead(ListNode* head){
    if(head->next==nullptr || head==nullptr) return nullptr;
    
    ListNode* temp = head;
    
    head = head->next;
    head->prev = nullptr;
    
    delete(temp);
    
    return head;
}
//==============================================================================================================
ListNode* removeTail(ListNode* head){
    if(head->next==nullptr || head==nullptr) return nullptr;
    
    ListNode* temp = head;
    
    while(temp->next->next!=0){
        temp= temp->next;
    }
    
    temp->next = nullptr;
    
    delete(temp->next);
    
    return head;
}
//==============================================================================================================
ListNode* removeKth(ListNode* head, int k){
    if(head->next==nullptr || head==nullptr) return nullptr;

    ListNode* temp = head;
    for(int i=1; i<k; i++){
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete(temp);

    return head;
}

int main(){

    vector<int> arr = {2, 6, 3, 7, 80, 12, 42};
    ListNode* head = convertToArray(arr);
    head = removeKth(head, 4);

    ListNode* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
} 