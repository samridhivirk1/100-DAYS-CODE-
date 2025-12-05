#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char new_line[256];

   
    printf("Enter the filename to append to: ");
    scanf("%s", filename);

   
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

   
    printf("Enter a new line of text: ");
    getchar();  // Consume the newline character left by scanf
    fgets(new_line, sizeof(new_line), stdin);

    
    fputs(new_line, file);

    
    fclose(file);

    printf("Text appended successfully.\n");
    return 0;

}
