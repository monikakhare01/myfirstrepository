#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    printf("Enter a number?\n");
    scanf("%d",&num);
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