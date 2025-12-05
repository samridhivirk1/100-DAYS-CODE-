#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[100];
    int age;

   
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);

   
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    fclose(file);
    printf("Data successfully saved to info.txt\n");

    return 0;
}
