#include <stdio.h>

int fact(int n);

int fact(int n)
{ 
    int num = 1;
    while(n>0){
        num = num * n;
        n--;
    }
    return num;
}

int main()
{
    printf("enter the value of n: ");
    int n;
    scanf("%d", &n);
    int factorial = fact(n);
    printf("The factorial of %d is: %d", n, factorial);
}
