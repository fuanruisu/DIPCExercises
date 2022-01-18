
#include <stdio.h>

void numpalindrome(int pal);
void main() {
  //Insert the number you want to know is a palindrome
    numpalindrome(1234321);

    
}

void numpalindrome(int pal){
    int num = 0, remain = 0, res = 0;
    num = pal;
    while (num > 0){
        
        remain = num % 10;
        res = res*10 + remain;
        num = num/10;
        
    }
    if (res == pal) printf("%d It's a palindrome", pal);
    else printf("%d It isn't a palindrome", pal);
  

  
}