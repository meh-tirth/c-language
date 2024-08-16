#include<stdio.h>

int main(){
    float a,b;

    printf("ENTER THE WEIGHT :");
    scanf("%f",&a);

    printf("ENTER THE ITEM :");
    scanf("%F",&b);

    printf("%.1fx%.0f = %.0f\n",a,b,a*b);

    float c,d;
    printf("WEIGHT item 2 :");
    scanf("%f",&c);
    printf("ITEM 2:");
    scanf("%f",&d);

    printf("%.1f x %.0f = %.0f\n",c,d,c*d);
    printf("%.0f + %.0f = %.0f\n",b,d,b+d);

    printf("%.1f x %.0f = %.0f\n",a*b,c*d,a*b+c*d);

    printf("%.0f / %.0f = %.f",a*b+c*d,b*d,(a*b+c*d)/(b+d));
}