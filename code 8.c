# include <stdio.h>

int main()
{
    float p,t,r, SI ;

    printf("enter the p,t,r one by one:");
    scanf("%f%f%f",&p,&r,&t);

    SI = (p*r*t)/100;
    printf("/nthe simple interset is: %.2f ",SI);

    return 0;
}
