#include<stdio.h>
int main()
{
    char Alpha;
    scanf("%c\n", &Alpha);

    if (Alpha <=122 && Alpha >= 97)
    {
        printf("LowerCase\n");
    }

    else
    {
        printf("UpperCase\n");
    }
    
    return 0;
    
}