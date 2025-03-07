/*
Write a program to find the bitwise AND of two given integers a and b without using the & operator. You can use other bitwise operators like |, ^, ~, and shifts to compute the result.

Input Format

A single line containing two integers a and b.
Constraints

-10^5 ≤ a,b ≤ 10^5
Output Format

Print the result of a&b computed without using the & operator.
Sample Input 0

5 3
Sample Output 0

1
Sample Input 1

8 12
Sample Output 1

8Write a program to find the bitwise AND of two given integers a and b without using the & operator. You can use other bitwise operators like |, ^, ~, and shifts to compute the result.

Input Format

A single line containing two integers a and b.
Constraints

-10^5 ≤ a,b ≤ 10^5
Output Format

Print the result of a&b computed without using the & operator.
Sample Input 0

5 3
Sample Output 0

1
Sample Input 1

8 12
Sample Output 1

8
*/
#include <stdio.h>

int main() {

    int num1;
    int num2;
    int result;
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    num1=~num1;
    num2=~num2;
    result=num1|num2;
    
    printf("%d",~result);
    
    
    return 0;
}