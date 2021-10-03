#include<stdio.h>
int main ()
{
    int num, range;
    printf("Enter no. u want table of.\n");
    scanf("%d", &num);

    printf("Enter the range till u want table\n");
    scanf("%d", &range);

    while (range <= 100)
    {
        printf("%d X %d = %d\n", num, range, num * (range++));
    }
    

}