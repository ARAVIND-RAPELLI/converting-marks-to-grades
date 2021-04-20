#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;


    /* Input marks of  subject from user */
    printf("Enter the marks you got ");
    scanf("%d",&marks);

    /* Find grade according to the marks */
    if(marks<=100)
        
    {
    if(marks>= 85)
    {
        printf("Grade A");
    }
    else if(marks >= 70)
    {
        printf("Your Grade is B");
    }
    else if(marks >= 55)
    {
        printf("Your Grade is C");
    }
     else if(marks >= 40)
    {
        printf("Your Grade is D");
    }
    else
    {
        printf("Your Grade is F");
    }
        
    }
    else
    {
         printf("invaild choice");
    }
    return 0;
}
