#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,t,hundred,twenty,ten,five,one;
    printf("enter the amount of money:");
    scanf("%d",&x);
    hundred=x/100;
    y=x%100;
    twenty=y/20;
    z=y%20;
    ten=z/10;
    t=z%10;
    five=t/5;
    one=t%5;
    printf("hundred=%d,twenty=%d,ten=%d,five=%d,one=%d",hundred,twenty,ten,five,one);



    return 0;
}
