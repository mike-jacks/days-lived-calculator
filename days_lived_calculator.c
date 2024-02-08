#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define DAYS_IN_YEAR 365

struct Person {
    char name[MAX_NAME_LEN];
    int age;
};

// Function to initialize a Person

void init_person(struct Person *p) {
    printf("Enter your name: ");
    fgets(p->name, MAX_NAME_LEN, stdin);
    p->name[strcspn(p->name, "\n")] = 0; // Remove newline character

    printf("Enter your age: ");
    scanf("%d", &p->age);
    while (getchar() != '\n'); // Clear the input buffer
}

int age_in_days(const struct Person *p) {
    return p->age * DAYS_IN_YEAR;
}

int main() {
    struct Person person;
    init_person(&person); // Iniitialize the person wtih user input

    printf("Name: %s\n", person.name);
    printf("Age in years: %d\n", person.age);
    printf("Age in days: %d\n", age_in_days(&person));

    return 0;
}
