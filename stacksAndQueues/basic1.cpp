#include<iostream>
#include<deque>
using namespace std;

#define MaxSize 11
//ImplementationOfQueue

class MyQ{

    int arr[MaxSize];
    int start = -1;
    int end = -1;
    int currentsize = 0;

public:

    void push(int x){
        if(currentsize>=MaxSize){
            cout<<"Queue Full"<<'\n';
            return;
        }

        if(start ==-1) start=0;
        end = (end+1)%MaxSize;
        arr[end] = x;
        currentsize++;
        return;
    }

    void pop(){
        
        if(currentsize==0){
            cout<<"Queue Empty!";
            return;
        }

        start = (start + 1)%MaxSize;

        currentsize--;

        if(currentsize ==0){
            start = -1;
            end = -1;
        }

        return;
    }

    int front(){
        if(currentsize==0) return -1;
        else return arr[start];
    }

    int back(){
        if(currentsize==0) return -1;
        else return arr[end];
    }

    bool isEmpty(){
        return currentsize==0;
    }

    bool isFull(){
        return currentsize == MaxSize;
    }
    



};

int main(){

    deque<int> dq;
    cout<<dq.size();


    return 0;
}