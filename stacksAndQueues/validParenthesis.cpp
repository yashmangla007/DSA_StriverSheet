#include<bits/stdc++.h>
using namespace std;

bool isMatchingPair(char open, char close) {
    if(open == '(') return (open == '(' && close == ')');
    else if(open == '[') return (open == '[' && close == ']');
    else return (open == '{' && close == '}');
}

bool isBalanced(string expression) {
    int n = expression.size();
    
    stack<char> st;
    
    for(int i=0; i<n; i++){
        if(expression[i]=='(' 
            || expression[i]=='['
            || expression[i]=='{') {
                
                st.push(expression[i]);
        }
        
        else if(expression[i]==')' 
                || expression[i]==']'
                || expression[i]=='}'){
            
            if(st.empty()) return false;
            
            else if(isMatchingPair(st.top(), expression[i])) st.pop();
        }
    }
    
    return st.empty();
}

int main(){
    int t;
    cin>>t;

    while(t--){
        
        string str;
        cin>>str;
        int n = str.length();
        cout<<str<<" : ";
        bool ans = isBalanced(str);
        if(ans)
            cout<<"true\n";
        else
            cout<<"false\n";
    }
    return 0;
}