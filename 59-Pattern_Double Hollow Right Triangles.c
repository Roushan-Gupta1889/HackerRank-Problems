/*
Write a program to print a pattern of double hollow right triangles based on an integer input n. The pattern consists of asterisks (*) and spaces arranged as follows:

The upper half of the pattern has rows with increasing numbers of stars on the left and the right.
In the hollow region, spaces replace asterisks except for the outermost boundaries of the triangles.
The last row is completely filled with asterisks (*).
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

The double hollow right triangle pattern for the given size n.
Print "Shape Not Possible" if the pattern is not possible.
Sample Input 0

5
Sample Output 0

*        *
**      **
* *    * *
*  *  *  *
**********
Sample Input 1

1
Sample Output 1

Shape Not Possible
*/

#include <stdio.h>

int main() {

    int rows;
    scanf("%d",&rows);
    if (rows>1){
        for (int i=1;i<=rows;++i){
            for (int k=1;k<=i;++k){
               if(i==1||i==rows||k==1|| k==i){
                   printf("*");
               }
               else{
                   printf(" ");
               } 
            }
            for (int j=1;j<=2*(rows-i+1)-2;++j){
                printf(" ");
            }
           
            for (int k=1;k<=i;++k){
               if(i==1||i==rows||k==1||k==i){
                   printf("*");
               }
               else{
                   printf(" ");
               } 
            }
            printf("\n");
        }
    }
    else{
        printf ("Shape Not Possible");
    }
    
    return 0;
}