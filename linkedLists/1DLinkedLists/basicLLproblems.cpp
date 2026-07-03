#include<bits/stdc++.h>
using namespace std;

//Defining the Node:
struct Node{
    int data;
    Node* next;

    Node(int d){    //constructor for initial making
        data = d;
        next = nullptr;
    }
};

//Converting array to LL
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

Node* removeHead(Node* head){
    //Checking for single element list
    if(head->next==nullptr) return nullptr;
    if(head==nullptr) return nullptr;
    
    Node* temp = head;
    head = head->next;
    delete temp;     //removed from memory
    return head;
}

Node* removeTail(Node* head){
    //Checking for 0 or 1 or 2 element list
    if(head==nullptr) return nullptr;
    if(head->next==nullptr) return nullptr;

    Node*temp = head;
    while(temp->next->next != nullptr){ 
        temp = temp->next;
    }

    delete(temp->next);
    temp->next = nullptr;

    return head;
}

int countLengthLL(Node* head){
    Node* temp = head;
    int count =0 ;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    } 

    return count;
}

bool searchLL(Node* head, int x){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data==x) return true;
        temp = temp->next;
    } 
    return false;
}

int main(){

    vector<int> arr = {2, 5, 7, 8};
    Node* head = convertArrtoLL(arr);
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<'\n';

    //Problem 1: Remove the head:
    cout<<"Problem1: Remove the head \n";

    head = removeHead(head);

    temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //Problem 2: Remove the Tail:
    cout<<"\nProblem2: Remove the tail \n";

    head = removeTail(head);

    temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //Problem 3: Count the length of LL:
    cout<<"\nProblem 3: Count the length of LL\n";

    vector<int> arr2 = {2,5,3,7,4,76,12,5};

    Node* head2 = convertArrtoLL(arr2);

    cout<<"Length of the LL is: "<<countLengthLL(head2);

    //Problem 4: Given the head of a linked list and an integer value, find out whether the integer is present 
    //           in the linked list or not. Return true if it is present, or else return false.:
    cout<<"\nProblem 4: Search in LL\n";

    cout<<"Enter target: ";
    int target;
    cin>>target;

    cout<<"\nTarget Found Status: "<<searchLL(head, target);


    return 0;
}