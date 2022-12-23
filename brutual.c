#include <stdio.h>

int main()
{
    signed int userInput, index, halfOfUserInput;

    // printf("Enter a number ");
    // scanf("%d", &userInput);
    userInput = 737373737;
    halfOfUserInput = userInput / 2;
    if (userInput <= 1)
    {
        printf("Not prime");
        return 0;
    }
    if (userInput == 2 || userInput == 3)
    {
        printf("Prime");
        return 0;
    }
    for (index = 2; index <= halfOfUserInput; index++)
    {

        if (userInput % index == 0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}