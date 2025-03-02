/*
Write a program to generate a Hailstone-like sequence for a given integer n based on the following rules:

If the number is divisible by 3, divide it by 3.
If the number is divisible by 5 and not divisible by 3, subtract 5.
If the number is less than 1, it becomes 1.
Otherwise, multiply the number by 5.
The sequence stops when the number reaches to 1.

Print the entire sequence, including the starting number and 1, and the maximum obtained number from the beginning untill it reaches 1.

Input Format

A single integer n.
Constraints

-10^5 ≤ n ≤ 10^5
Output Format

Two lines:

A single line containing the sequence of numbers, separated by a ->.
The maximum number obtained in the sequence, "Max Number: [maxNumber]"
Sample Input 0

10
Sample Output 0

10 -> 5 -> 0 -> 1
Max Number: 10
Sample Input 1

51
Sample Output 1

51 -> 17 -> 85 -> 80 -> 75 -> 25 -> 20 -> 15 -> 5 -> 0 -> 1
Max Number: 85
*/

#include <stdio.h>

int main() {
    int num;
    int result;
    scanf("%d", &num);
    int first = 1;
    int max_num = 0;

    if (num > 1) {
        printf("%d -> ",num);
        while (num != 0) {
            if(num==1){
                break;
            }
            
            
            
            if (num > max_num) {
                max_num = num; 
            }

            if (num % 3 == 0) {
                result = num / 3; 
            } else if (num % 5 == 0) {
                result = num - 5; 
            } else {
                result = num * 5; 
            }
            
            num = result;
            if (first == 1) {
                printf("%d", num);
                first = 0;
            } else {
                printf(" -> %d", num);
            }
        }
        if(num==0){
        printf(" -> 1\n");    
        }
        else{
        printf("\n");    
        }
        
        printf("Max Number: %d\n", max_num); 
    } else {
        printf("1\n");
    }

    return 0;
}

