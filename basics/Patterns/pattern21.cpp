
/*=====================================Pattern 21==================================================

****            11  12  13  14
*  *   ----\    21
*  *   ----/    31
****            41

*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i<=4; i++){
        for (int j = 1; j <= 4; j++){
            if(i==1 || i==4 || j==1 || j==4) cout<<"*";
            else cout<<" ";
        }
        cout<<'\n';
    }

    return 0;
}