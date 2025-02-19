#include <stdio.h>
#include <string.h>

// Define a nested structure
struct Address {
    char city[30];
    char state[30];
    int pincode;
};

struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    struct Person person;

    // Input details for the person
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = 0; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Enter city: ");
    scanf("%s", person.address.city);

    printf("Enter state: ");
    scanf("%s", person.address.state);

    printf("Enter pincode: ");
    scanf("%d", &person.address.pincode);

    // Display the information
    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);
    printf("Pincode: %d\n", person.address.pincode);

return 0;
}
