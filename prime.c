#include<stdio.h>
#include<math.h>
/*
    This file initially contained a piece of code that checks if a number is prime or not

    Added a function that checks if a number is even or odd as well
*/
/*THIS LINE IS ADDED*/
char* getResultStringValue(int num)
{
    if(num==0)
    {
        return "its even";
    }
    else
    {
        /* code */
        return "its odd";
    }
    
}
int EvenOrOdd(int num)
{
    return num%2;
}
int main()
{
    int num,i;
    printf("Enter a number?\n");
    scanf("%d",&num);
    printf("EvenOrOdd : %s\n",getResultStringValue(EvenOrOdd(num)));
    for(i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        {
            printf("the number must not be a prime\n");
            return 1;
        }
        
    }
    printf("The number you entered is probably a prime number\n");
    return 0;
}