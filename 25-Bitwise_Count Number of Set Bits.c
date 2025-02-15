/*
Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

Input Format

A single integer n
Constraints

-2^31 ≤ n ≤ 2^31
Output Format

Output the count of set bits in the first 4 bits of n.
Sample Input 0

29
Sample Output 0

3
Sample Input 1

15
Sample Output 1

4
*/

#include <stdio.h>

int main() {

    int num;
    int index0,index1,index2,index3;
    int result;
    
    scanf("%d",&num);
    index3=(num>>3)&1;
    index2=(num>>2)&1;
    index1=(num>>1)&1;
    index0=(num)&1;
    result=(index3+index2+index1+index0);
    printf("%d",result);
    
    return 0;
}