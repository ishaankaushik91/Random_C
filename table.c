#include<stdio.h>
int main ()
{
    int num, range;
    
    printf("Enter\n");
    scanf("%d", &num);
    
    printf("Enter a range\n");
    scanf("%d", &range);
    
    while(range <= 10000)
    {
        if((range >= 0 && range < 2000) || (range >= 2000 && range < 3000) || range >= 3000 && range >= 10000)
        {
            printf("%d X %d = %d\n", num, range, num * (range++));
            
        }
    }
    
    return 0;

}