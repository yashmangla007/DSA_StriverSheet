
/*=====================================Pattern 3==================================================
E
DD
CCC
BBBB
AAAAA
*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){

        for (int j = 0; j <i+1; j++){
            cout<<char('A'+4-i);                  
        }
        cout<<'\n';
    }

    return 0;
}