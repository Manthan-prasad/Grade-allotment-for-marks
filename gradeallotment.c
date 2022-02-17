#include <stdio.h>
int main()
{
    int m;
    printf("Enter marks: \n");
    scanf("%d",&m);
    if(m>100)
    {
        printf("Marks not valid\n");
    }
    else if(m>=85&&m<101)
    {
        printf("Grade A\n");
    }
    else if(m>=70&&m<85)
    {
        printf("Grade B\n");
    }
    else if(m>=55&&m<70)
    {
        printf("Grade C\n");
    }
    else if(m>=40&&m<55)
    {
        printf("Grade D\n");
    }
    else if(m<40)
    {
        printf("Grade E\n");
    }
    return 0;
}
