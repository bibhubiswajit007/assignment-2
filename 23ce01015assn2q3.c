#include<stdio.h>
int main(){
    int daysi,dayso,years,months,weeks,rem;
    printf("enter the number of days:");
    scanf("%d",&daysi);
    years=(daysi/365);
    rem=daysi-years*365;
   months=rem/30;
   rem=rem-30*months;
   weeks=rem/7;
   dayso=rem-7*weeks;
     printf("Years:%d",years);
    printf("\nMonths:%d",months);
    printf("\nWeeks:%d",weeks);
    printf("\nDays:%d",dayso);
    return 0;
}