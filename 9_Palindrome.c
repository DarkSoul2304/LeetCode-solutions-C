///Given an integer x, return true if x is a palindrome, and false otherwise.

#include <stdbool.h>

bool isPalindrome(int x) {

    if(x<0 || x%10==0 && x!=0){ ///jesli jest <0 i konczy sie na 0 false
        return false;
    }

    int odwrocona = 0;
    while(x>odwrocona){
        odwrocona = odwrocona*10 + x%10;  ///odwracamy liczbe
        x/=10;
    }

    return x == odwrocona || x == odwrocona/10; //przypadek gdy liczby sa parzyste i nie
    
}
