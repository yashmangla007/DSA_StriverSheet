#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int d){    //constructor for initial making
        data = d;
        next = nullptr;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* moover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        moover->next = temp;
        moover = temp;
    }

    return head;
}



int main(){

    vector<int> arr = {2, 5, 7, 8};
    Node* head = convertArrtoLL(arr);
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}