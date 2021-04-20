#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;


    /* Input marks of  subject from user */
    printf("Enter the marks you got ");
    scanf("%d",&marks);

    /* Find grade according to the marks */
    if(marks>= 90)
    {
        printf("Grade O"); /*outstanding*/
    }
    else if(marks >= 80)
    {
        printf("Your Grade is A");
    }
    else if(marks >= 70)
    {
        printf("Your Grade is B");
    }
    else if(marks >= 60)
    {
        printf("Your Grade is C");
    }
    else if(marks >= 50)
    {
        printf("Your Grade is D");
    }
     else if(marks >= 40)
    {
        printf("Your Grade is E");
    }
    else
    {
        printf("Your Grade is F");
    }

    return 0;
}
