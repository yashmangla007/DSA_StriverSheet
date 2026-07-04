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

//--------------------------------------------------------------------------------------------------------------
ListNode* insertHead(ListNode* head, int value){
    if(head==nullptr) return new ListNode(value);

    ListNode* temp = new ListNode(value);
    head->prev = temp;
    temp->next = head;
    head  =temp;
    return head;
}
//--------------------------------------------------------------------------------------------------------------
ListNode* insertBeforeTail(ListNode* head, int value){
    if(head==nullptr) return new ListNode(value);
    
    ListNode* temp = head;
    ListNode* insert = new ListNode(value);
    
    while(temp->next!=nullptr){
        temp = temp->next;
    }

    insert->next= temp;
    insert->prev = temp->prev;
    temp->prev->next = insert;
    temp->prev = insert;

    return head;
}

//--------------------------------------------------------------------------------------------------------------
ListNode* insertBeforeKth(ListNode* head, int k, int value){
    if(head==nullptr) return new ListNode(value);

    ListNode* temp = head;
    ListNode* insert = new ListNode(value);

    if(k==1){
        head->prev = insert;
        insert->next = head;
        head = insert;
        return head;
    }
    
    for(int i = 1; i<k; i++){
        temp = temp->next;
    }

    insert->next= temp;
    insert->prev = temp->prev;
    temp->prev->next = insert;
    temp->prev = insert;

    return head;
}   

int main(){
 
    vector<int> arr = {2, 6, 3, 7, 80, 12, 42};
    ListNode* head = convertToArray(arr);
    head = insertBeforeKth(head, 2, 4);

    ListNode* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}