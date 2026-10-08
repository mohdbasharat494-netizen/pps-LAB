#include <stdio.h>

int main()

{
    int no1;
    int no2;
    int no3;
    int sum;
    float avg;
    printf("enter the number ");
    scanf("%d",&no1);
    printf("enter the number ");
    scanf("%d",&no2);
    printf("enter the number ");
    scanf("%d",&no3);
    sum=no1+no2+no3;
    avg=sum/3;
    printf("the avg is:%f",avg);
    return 0;
}
