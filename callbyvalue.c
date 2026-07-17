#include<stdio.h>
void change(int *x)
{
    *x = 100; // Change the value at the address pointed to by x
}
int main()
{
    int a = 10;

    change(&a); 
    printf("a = %d\n", a); // Pass the address of a to the function
    return 0;
}