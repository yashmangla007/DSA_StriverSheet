/*===================================== Pattern 12 ==================================================
   A                |   /|_
  ABA   ----\       | 1/ | \ 
 ABCBA  ----/       | /2 | 3\   
ABCDCBA             |/___|___\

===================================================================================================*/

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<4; i++){
        for (int j = 0; j <3-i; j++){       //For 1
            cout<<" ";
        }
        for (int j = 0; j <i+1 ; j++){      //For 2
            cout<<char('A'+j);
        }
        for (int j = i; j>0; j--){          //For 3
            cout<<char('A'+j-1);
        }
        cout<<'\n';
    }

    return 0;
}