/*===================================================PATTERN THEORY=============================================
->      Columns     
ROwS -> __ __ __ __
        __ __ __ __
        __ __ __ __
        __ __ __ __

-> About Nested Loops:  1. Rows => Outer Loop 
                        2. Columns => Inner Loop
*/

/*=====================================Pattern 1==================================================
*****
*****
*****
*****
*****
*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<5; i++){
        for (int j = 0; j < 5; j++){
            cout<<"*";
        }
        cout<<'\n';
    }

    return 0;
}