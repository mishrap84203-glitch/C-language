#include<stdio.h>
struct Student {
    
    char name[50];
    int age;
    float marks;
    char grade;
    long roll_number;
};
int main() {
    struct Student s[5];
    for(int i = 1; i <= 5; i++) {
        printf("Enter details for student %d:\n", i);
        printf("Enter name: ");
        scanf("%s", s[i-1].name);
        printf("Enter age: ");
        scanf("%d", &s[i-1  ].age);
        printf("Enter marks: ");
        scanf("%f", &s[i-1].marks);
        printf("Enter grade: ");
        scanf(" %c", &s[i-1 ].grade);
        printf("Enter roll number: ");
        scanf("%ld", &s[i-1].roll_number);
    }

    printf("\nStudent Details:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Student %d:\n", i);
        printf("Name: %s\n", s[i-1].name);
        printf("Age: %d\n", s[i-1].age);
        printf("Marks: %.2f\n", s[i-1].marks);
        printf("Grade: %c\n", s[i-1].grade);
        printf("Roll Number: %ld\n", s[i-1].roll_number);
    }

    return 0;
}