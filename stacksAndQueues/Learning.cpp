#include<bits/stdc++.h>
using namespace std;

int main(){

    //Learning Queues:

    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(5);
    q.push(3);
    q.push(9);
    q.front() = 6;
    cout<<q.front()<<endl;    
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()-2;    

    
    return 0;
}