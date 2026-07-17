#include<stdio.h>
int main()
{
    int choice ;
    float side,length,breath,area,redius;
    
    printf("choose shape\n");
    printf("1. square\n");
    printf("2. rectangle\n");
    printf("3. circle\n");
    
    printf("Enter your choice\n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        printf("enter the side:");
        scanf("%f", &side);
        
         area = side*side;
         printf("area=%.2f",area);
         break;
         
         case 2:
         printf("enter the length ");
         printf("enter the breadth");
         
         scanf("%f%f", &length, &breath);
         
         area= length*breath;
         
         printf("area=%.2f", area);
         break ;
         
         case 3:
         printf("enter the redius");
         scanf("%f", &redius);
         
         area= 3.14*redius*redius;
         printf("area=%.2f", area);
         break;
         default:
         printf("invalid choice");
        
    }
    return 0;
}
    