#include <stdio.h>
int main() {
    int max[1][3] = {{7, 5, 3}}, alloc[1][3] = {{0, 1, 0}}, avail[3] = {3, 3, 2}, need[1][3];
    for (int j = 0; j < 3; j++) need[0][j] = max[0][j] - alloc[0][j];
    for (int j = 0; j < 3; j++)
        if (need[0][j] > avail[j]) { printf("Unsafe State\n"); return 0; }
    printf("Safe State\n");
}
