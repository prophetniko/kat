#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]){
    if (argc > 2) {
        printf("Too many arguments\n");
        exit(1);
    } else if (argc == 1) {
        printf("Requires atleast 1 argument\n");
        exit(1);
    }
    
    FILE* fptr;
    fptr = fopen(argv[1], "r");
    
    if (fptr == NULL) {
        printf("Failed to read file\n");
        exit(1);
    } else {
        char data[4096];
        while (fgets(data, sizeof(data), fptr) != NULL)
        {
            printf("%s", data);
        }
        fclose(fptr);
    }

    return 0;
}
