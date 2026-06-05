#include <iostream>

bool isPalindrome(int x){
    
    if ((x < 0) || (x % 10 == 0 && x != 0)) return false;       // Plaindrome cant be negative and
                                                                //  cant end with 0
    int rev = 0;
    while (x > rev)
    {
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }
    if (rev == x || x == rev / 10)
        return true;
    else
        return false;
}

int main(){

    int n;
    std::cout << "Enter N: ";
    std::cin >> n;

    if(isPalindrome(n)==1) std::cout<<"Number is Palindrome!";
    else std::cout<<"Number is not Palindrome!";

    return 0;
}