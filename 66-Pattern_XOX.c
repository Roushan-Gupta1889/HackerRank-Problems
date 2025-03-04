/*
Write a program to print a pattern called Shape XOX for a given integer n, where n represents the number of rows and columns in the square grid.

The pattern follows these rules:

The pattern has n rows and n columns.
The middle row and middle column of the grid consists entirely of x characters.
All other rows and columns contain o characters to form the shape.
Note:

If the input n is even, convert it the next odd number, to print the shape.
Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the shape cannot be drawn by the given input value.
Input Format

A single integer n.
Constraints

A single integer n.
Output Format

Print the "XOX" shape as described.
Print "Shape Not Possible" if the shape cannot be drawn.
Sample Input 0

5
Sample Output 0

ooxoo
ooxoo
xxxxx
ooxoo
ooxoo
Sample Input 1

0
Sample Output 1

Shape Not Possible
Sample Input 2

6
Sample Output 2

oooxooo
oooxooo
oooxooo
xxxxxxx
oooxooo
oooxooo
oooxooo

*/

#include <stdio.h>

int main() {

    int rows;
    scanf("%d",&rows);
    if(rows>1){
        if (rows%2==1){
        for (int i=1;i<=rows;++i){
        for (int j=1;j<=rows;++j){
            if(j==(rows+1)/2||i==(rows+1)/2){
                printf("x");
            }
            else{
                printf("o");
            }
        }
        printf("\n");    
    }
    }
    else if(rows%2==0){
        for (int i=1;i<=rows+1;++i){
        for (int j=1;j<=rows+1;++j){
            if(j==(rows/2)+1||i==(rows/2)+1){
                printf("x");
            }
            else{
                printf("o");
            }
        }
         printf("\n");
    }
    }
    }
    else{
        printf("Shape Not Possible");
    }
    
    
    return 0;
}