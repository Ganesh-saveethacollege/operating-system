#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    char line[100], *pattern = "hello";
    while (fgets(line, sizeof(line), fp))
        if (strstr(line, pattern)) 
            printf("%s", line);
    fclose(fp);
}
