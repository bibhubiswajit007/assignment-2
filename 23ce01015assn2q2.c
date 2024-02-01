#include<stdio.h>
int main(){
    int num1,num2,num3,max;
    printf("enter number 1:");
    scanf("%d",&num1);
    printf("enter number 2:");
    scanf("%d",&num2);
    printf("enter number 3:");
    scanf("%d",&num3);
    max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
    printf("the maximum is %d",max);
    return 0;
}