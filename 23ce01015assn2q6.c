#include<stdio.h>
int main(){
    int num1;
    printf("enter a number between 100 and 200:");
    scanf("%d",&num1);
    (100<=num1<=200)?((num1%2==0)?printf("Number is even"):printf("Number is odd")):(printf("Out of range"));
    return 0;
}