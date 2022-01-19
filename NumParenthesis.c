/*This program prints out the necessary parenthesis needed
to delete or add to correct the code syntaxis
Author: Juan Luis Magaña Paz
*/

#include <stdio.h>
#include <string.h>
#define SIZEARRAY 25
void completeBrackets(char *string);
void main() {
    char brackIn[SIZEARRAY];
    printf("Enter a sequence of brackets:\n");
    scanf("%s",brackIn);
    completeBrackets(brackIn);
    
    
}
void completeBrackets(char *string){
    int oBrack = 0, cBrack = 0, diff = 0;
     for (int i = 0; i < strlen(string); i++) {
        if (string[i]==0x28) oBrack++;
        else if (string[i]==0x29) cBrack++;
        if(oBrack > cBrack) diff = oBrack - cBrack;
        else diff = cBrack - oBrack;
        
        //0x28 => (, 0x29 => )
  }
  printf("Open = %d, Close = %d \n", oBrack, cBrack);
   printf("Characters needed %d", diff);
    
}