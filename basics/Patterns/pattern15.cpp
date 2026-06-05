
/*=====================================Pattern 3==================================================
ABCDE
ABCD
ABC
AB
A
*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){

        for (int j = 0; j <5-i; j++){
            cout<<char('A'+j);                  
        }
        cout<<'\n';
    }

    return 0;
}