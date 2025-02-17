/*
Write a program to find the maximum of two integers a and b without using any comparison operators (<, >, <=, >=) and if-else at any stage in the program. Use only bitwise operators and logical operators to determine which number is larger.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the larger of the two integers.
Sample Input 0

5 3
Sample Output 0

5
Sample Input 1

-7 2
Sample Output 1

2
*/

#include <stdio.h>

int main() {

    int a;
    int b;
    int result;
    int sign_bit;
    int maxN;
    
    
    scanf("%d  %d",&a,&b);
    result=(a-b);
    sign_bit=(result>>31)&(1);
    maxN=a-sign_bit*(a-b);
    printf("%d",maxN);
    
    return 0;
}