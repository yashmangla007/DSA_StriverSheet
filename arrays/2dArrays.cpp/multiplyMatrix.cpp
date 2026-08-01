#include<iostream>
using namespace std;

int main(){

    int arr1[3][4];

    int arr2[4] [3];
    int ans[3][3];

    cout<<"Enter 1st Matrix: \n";

    for(int i = 0; i<3; i++){
        for (int j = 0; j < 4; j++){
            cin>>arr1[i][j];
        }
    }

    
    cout<<"Enter 2nd Matrix: \n";

    for(int i = 0; i<4; i++){
        for (int j = 0; j < 3; j++){
            cin>>arr2[i][j];
        }
    }

    
    for(int i = 0; i<3  ; i++){
        for (int j = 0; j < 3; j++){
            int sum=0;
            for(int k=0; k<4; k++){
                sum+= arr1[i][k]*arr2[k][j];
            }
            ans[i][j] = sum;
        }
    }
    
    cout<<"Multiplication is :\n";

    for(int i = 0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}