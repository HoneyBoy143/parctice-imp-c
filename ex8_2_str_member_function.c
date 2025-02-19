#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student s1, s2;

    // Input details for student s1
    printf("Enter details for student 1:\n");
    printf("Enter ID: ");
    scanf("%d", &s1.id);
    printf("Enter Name: ");
    getchar(); // Clear newline character from the buffer
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0; // Remove newline character
    printf("Enter Age: ");
    scanf("%d", &s1.age);

    // Input details for student s2
    printf("\nEnter details for student 2:\n");
    printf("Enter ID: ");
    scanf("%d", &s2.id);
    printf("Enter Name: ");
    getchar(); // Clear newline character from the buffer
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = 0; // Remove newline character
    printf("Enter Age: ");
    scanf("%d", &s2.age);

    // Display details of student s1
    printf("\nDetails of Student 1:\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    // Display details of student s2
    printf("\nDetails of Student 2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);

return 0;
}