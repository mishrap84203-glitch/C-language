#include<stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
    int age;
    char gender;
};

int main() {
    struct Student s1;

    printf("Enter student ID: ");
    scanf("%d\n", &s1.id);

    printf("Enter student name: ");
    scanf("%s\n",  s1.name);

    printf("Enter student marks: ");
    scanf("%f\n", &s1.marks);

    printf("enter the age of the student: ");
    scanf("%d\n", &s1.age);

    printf("enter the gender of the student: ");
    scanf("%c\n", &s1.gender);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", s1.id);  
    printf("Name: %s\n", s1.name);
    printf("Marks: %f\n", s1.marks);  
    printf("Age: %d\n", s1.age);
    printf("Gender: %c\n", s1.gender); 
    return 0;
}