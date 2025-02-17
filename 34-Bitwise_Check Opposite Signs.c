/*
Write a program to determine if two integers a and b have opposite signs using bitwise operators.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print "Yes" if a and b have opposite signs.
Print "No" otherwise
Sample Input 0

-5 6
Sample Output 0

Yes
Sample Input 1

7 3
Sample Output 1

No
*/

#include <stdio.h>

int main() {

    int num1;
    int num2;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    
    if ((num1>>31==0 && num2>>31==0)||(num1>>31==-1 && num2>>31==-1)) {
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}