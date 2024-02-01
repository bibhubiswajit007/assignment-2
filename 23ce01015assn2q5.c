#include<stdio.h>
int main(){
    int num1;
    printf("enter a number:");
    scanf("%d",&num1);
    (num1&1)?printf("Number is odd"):printf("number is even");
    return 0;
}