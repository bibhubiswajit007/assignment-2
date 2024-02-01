#include<stdio.h>
#include<math.h>
int main(){
    float meal,tax,tip,net;
    printf("enter meal cost:");
    scanf("%f",&meal);
    printf("enter tip percent:");
    scanf("%f",&tip);
    printf("enter tax percent:");
    scanf("%f",&tax);
    net=meal*(1+(tip+tax)/100);
    printf("Total cost is %f.",round(net));
    return 0;
    }