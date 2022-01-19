/*This program prints out the letter of the given column number of 
a spreadsheet e.g. 27 => AA 3 => C 
Author: Juan Luis Magaña Paz
*/

#include <stdio.h>


void spLetter(int colNum);
void main() {
  int ncolumn;
  printf("Enter the column number:\n");
  scanf("%d",&ncolumn);
  spLetter(ncolumn);
    
}

void spLetter (int colNum){
    int diff, count = 0, count2 = 0;
    while(colNum > 26) {
        
        colNum = colNum - 26;
        
        count++;
        if (count > 26 ) {
            count = 1;
            count2++;
        }   
    }
    
    colNum += 64;
    count += 64;
    count2 += 64;
    //printf("%c, %c, %c", count2, count, colNum);
   
    
    if(count2 > 64){
        printf("%c", count2);
        printf("%c", count);
        printf("%c", colNum);
        }
    else {
        printf("%c", count);
        printf("%c", colNum);}
    
}