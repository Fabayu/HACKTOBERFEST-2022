#include<stdio.h>
#include<math.h>
void main()
{
    int u,v,a,b,c;
    float s,x,y;
    printf("Enter a,b&c of a*x*x+b*x+c:");
    scanf("%d %d %d",&a,&b,&c);
    u=b*b;
    v=4*a*c;
    s=sqrt(u-v);
    x=(-b+s)/2/a;
    y=(-b-s)/2/a;
    printf("The value of x is %.2f or %.2f",x,y);
}
