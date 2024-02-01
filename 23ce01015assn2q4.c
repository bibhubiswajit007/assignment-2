#include<stdio.h>
int main(){
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    (year%4==0)?((year%100==0)?((year%400==0)?printf("Year is a leap year."):printf("Year is not a leap year.")):printf("Year is a leap year")):printf("Year is not a leap year");
    return 0;
}