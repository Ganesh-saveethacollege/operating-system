#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "w");
    fprintf(fp, "Hello, World!");
    fclose(fp);
}
