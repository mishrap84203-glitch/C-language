#include<stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    int result = add(5, 10);
    printf("The sum is: %d\n", result);
    return 0;
}