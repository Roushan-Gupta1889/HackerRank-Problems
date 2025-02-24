/*
You are given a number n. Your task is to multiply it by 3.5 using only bitwise operators and addition.

Note: You are not allowed to use the multiplication (*) or division (/) operators in your solution.

Input Format

A single integer n.
Constraints

0 ≤ n ≤ 10^9
Output Format

Print the integer part of n × 3.5
Sample Input 0

4
Sample Output 0

14
Sample Input 1

15
Sample Output 1

52
*/

#include <stdio.h>

int main() {
    int num;
    int result;
    scanf("%d",&num);
    result=((num)<<2)-((num)>>1)-(num&1);// or (num<<1 + num)+(num>>1)
    printf("%d",result);
    return 0;
}