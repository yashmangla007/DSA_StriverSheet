#include<iostream>
using namespace std;

class myStack{
public:
    int st[11];
    int n = sizeof(st)/sizeof(st[0]);
    int topind = -1;

    void push(int x){                   //O(1)
        if(topind>=n-1) return;
        topind ++;
        st[topind] = x;
        return;
    }

    void pop(){                   //O(1)
        if(topind==-1) return;
        st[topind] = 0;
        topind--;
        return;
    }

    int size(){                   //O(1)
        return topind+1; //No edge case needed, since even if top=-1, top+1 = 0
    }

    int top(){                   //O(1)
        if(topind ==-1) return -1;
        return st[topind];
    }


};

class MyQueue{

    int q[11];
    int n = (sizeof(q)/sizeof(q[0]));

    int start = -1, end = -1;
    int cursize = 0;

    void push(int x){
        if(cursize == n) return;
        if(start == -1) start = 0;
        end = (end+1)%n;
        q[end] = x;
        cursize++;
        return;
    }

    void pop(){
        if(cursize = 0) return;
        cursize--;
        
        if(cursize==0){
            start = -1;
            end = -1;
            return;
        }
        start = (start+1)%n;
        return;
    }

    int top(){
        if(cursize==0) return -1;
        return start;
    }

    int size(){
        return cursize;
    }
};


int main(){
    return 0;
}