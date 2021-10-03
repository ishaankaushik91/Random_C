#include<stdio.h>
int main()
{

    float Math, CS, Physics;
    printf("Enter math grades");
    scanf("%f", &Math);
    printf("Enter CS grades");
    scanf("%f", &CS);
    printf("Enter physics grades");
    scanf("%f", &Physics);

    float Total = ((Math + CS + Physics) / 300) * 100 ;

    if ((Math > 100) || (Math < 0) || (CS > 100) || (CS < 0) || (Physics > 100) || (Physics < 0))
    {
        printf("Invalid Scores!\n");
    }
    
    else if (Math >=33 && Physics >= 33 && CS >= 33 && Total >= 40)
    {
        printf("Yo Homie u have passed, ya total is %f\n", Total);
    }
    
    else
    {
        printf("Failed!\n");
    }
    


    return 0;
}