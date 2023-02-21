#include <stdio.h>
void main() {
    FILE *file;
    file = fopen("C:/Users/franc/Desktop/nomefile.txt", "r");
    char c;
    if (file == NULL) {
        printf("Impossibile creare il file\n");
    }
    do{
        c=getc(file);
        putchar(c);

    }while(c!=EOF);
    fclose(file);
}
