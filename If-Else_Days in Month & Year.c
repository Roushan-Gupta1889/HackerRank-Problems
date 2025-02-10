/*You are tasked with building a small utility program for a calendar management system. The program should determine the number of days in a specific month of a given year. It must also handle invalid inputs gracefully.

Write a program that:

Reads two integers:
year (e.g., 2024)
month (1 for January, 2 for February, ..., 12 for December).
Determines the number of days in the specified month for the given year, considering leap years.
Handles invalid inputs:
If the month is not between 1 and 12, output "Invalid Month"
If the year is less than 1, output "Invalid Year"
Input Format

The first line contains an integer, month, representing the month.
The second line contains an integer, year, representing the year.
Constraints

-10^6 ≤ year ≤ 10^6

-10^6 ≤ month ≤ 10^6

Output Format

If both inputs are valid, output an integer representing the number of days in the specified month.
If the month is invalid, output "Invalid Month".
If the year is invalid, output "Invalid Year".
Sample Input 0

2
2020
Sample Output 0

29
Explanation 0

2020 is a leap year, so February(2) has 29 days.

Sample Input 1

11
2023
Sample Output 1

30
Explanation 1

November(11) has 30 days

Sample Input 2

0
0
Sample Output 2

Invalid Month
Invalid Year
*/

#include <stdio.h>
#include <string.h>

int main() {

    int month,year;
    
    scanf("%d\n",&month);
    scanf("%d",&year);
    
    if ( (month<=0 || month>12)&& (year<=0) ){
        printf("Invalid Month\nInvalid Year" );
    }
    else if ((month<=0 || month>12)){
        printf("Invalid Month");
    }
    else if (year<=0){
        printf("Invalid Year");
    }
    
    
    
    else if(month==1){
        printf("31");
    }
    else if(month==2){
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            printf("29");
        }
        else{
            printf("28");
        }
       
    }
    else if(month==3){
        printf("31");
    }
    else if(month==4){
        printf("30");
    }
    else if(month==5){
        printf("31");
    }
    else if(month==6){
        printf("30");
    }
    else if(month==7){
        printf("31");
    }
    else if(month==8){
        printf("31");
    }
    else if(month==9){
        printf("30");
    }
    else if(month==10){
        printf("31");
    }
    else if(month==11){
        printf("30");
    }
    
    
    else {
        printf("31");
    }
    
    
    return 0;
}