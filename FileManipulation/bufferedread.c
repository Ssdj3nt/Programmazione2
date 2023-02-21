#include <stdio.h>
#define l 10
int main(void) {
    FILE *file;
    file = fopen("C:/Users/franc/Desktop/nomefile.txt", "r");
    char buffer[l];
    if (file == NULL) {
        printf("Impossibile creare il file\n");
    }

    while(fgets(buffer, l, file) != NULL){
        printf("%s",buffer);
    }
    fclose(file);
}
