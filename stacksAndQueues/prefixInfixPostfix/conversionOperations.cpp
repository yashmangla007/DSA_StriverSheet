#include<bits/stdc++.h>
using namespace std;

bool isOperand(char c){
    if(c>='A' && c<='Z') return true;
    else if(c>='a' && c<='z') return true;
    else if(c>='0' && c<='9') return true;
    else return false;
}

bool isOperator(char o){
    if ( 
        o == '^'||o == '*'||
        o == '-'||o == '+'||o == '/'){
            return true;
    }
    else return false;
}

int priority(char o){
    if(o == '^') return 3;
    else if(o == '/' ||o == '*' ) return 2;
    else if(o == '+' ||o == '-' ) return 1;
    else return -1;
    
}

string infixToPostfix(string input){

    string ans;
    stack<char> st;

    for(int i=0; i<input.size(); i++){      //O(N)
        if(isOperand(input[i])){
            ans += input[i];
        }

        else if(input[i] == '('){
            st.push(input[i]);
        }

        else if(input[i] == ')'){
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }

        else if(isOperator(input[i])){

            while(!st.empty() &&
                st.top() != '(' && (
                    priority(st.top()) > priority(input[i]) ||
                    (priority(st.top()) == priority(input[i]) 
                    && input[i] != '^')
                ))
            {
                ans += st.top();
                st.pop();
            }

            st.push(input[i]);
        
        }

    }

    while(!st.empty()){
        ans+= st.top();
        st.pop();
    }

    return ans;

}

int main(){
    return 0;
}