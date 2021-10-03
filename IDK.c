#include<stdio.h>
int main ()
{
    int i = 0;

    while (i <= 20)
    {
        printf("%d\t", i++);

        if (i == 20)
        {
            while (i >= 0)
            {
                printf("%d\t", i--);
            }
            
        }
    }
    
    return 0;
    
}