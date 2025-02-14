/*
Given a number n and a position i, write a program to unset the i-th bit of n using bitwise operators.

Input Format

The first line contains an integer n.
The second line contains an integer i.
Constraints

-10^9 ≤ n ≤ 10^9
0 ≤ i ≤ 31
Output Format

Print the updated value of n after unsetting the i-th bit.
Sample Input 0

5
1
Sample Output 0

5
Sample Input 1

29
3
Sample Output 1

21
*/ 

#include <stdio.h>

int main() {

    int num,i;
    scanf("%d\n%d",&num,&i);
    
    num=num & (~(1<<i));
    printf("%d",num);
    return 0;
}