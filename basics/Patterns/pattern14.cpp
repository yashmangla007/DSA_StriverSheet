/*=====================================Pattern 3==================================================
A
AB
ABC
ABCD
ABCDE
*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){
        char c = 'A';
        for (int j = 0; j <i+1; j++, c++){
            cout<<c;                            // could been done without using extra variable c: 
        }                                       // like: cout << char('A' + j);
        cout<<'\n';
    }

    return 0;
}