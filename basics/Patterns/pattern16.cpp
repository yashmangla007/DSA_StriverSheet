
/*=====================================Pattern 3==================================================
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){

        for (int j = 0; j <i+1; j++){
            cout<<char('A'+i);                  
        }
        cout<<'\n';
    }

    return 0;
}