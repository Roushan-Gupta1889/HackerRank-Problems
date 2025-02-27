/*
Write a program to generate the Collatz sequence for a given positive integer n. Starting with any positive integer n, Collatz sequence is defined corresponding to n as the numbers formed by the following operations :

If n is even, then n = n / 2.
If n is odd, then n = 3*n + 1.
Repeat above steps, until it becomes 1.
Input Format

A single integer n.
Constraints

1 ≤ n ≤ 10^5
Output Format

A single line containing the sequence of numbers, separated by a ( -> ).
Sample Input 0

6
Sample Output 0

6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
Sample Input 1

15
Sample Output 1

15 -> 46 -> 23 -> 70 -> 35 -> 106 -> 53 -> 160 -> 80 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
*/

#include <stdio.h>

int main() {

    int num;
    int result;
    scanf("%d",&num);
    int first=1;
    if (num==1){
        printf("1");
    }
    else{
        while(num!=1){
        
        if (num%2==0){
            result=num/2;
            if(first==1){
                printf("%d",num);
                first=0;
            }
            printf(" -> %d",result);
            num=result;
        }
        else{
            result=3*num+1;
            if(first==1){
                printf("%d",num);
                first=0;
            }
            
            printf(" -> %d",result);
            num=result; 
        }
    }
    }
    
    
    return 0;
}