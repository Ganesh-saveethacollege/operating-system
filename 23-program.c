#include <stdio.h>
int main() {
    int block[3] = {10, 20, 15}, process = 12;
    for (int i = 0; i < 3; i++) {
        if (block[i] >= process) {
            printf("Allocated at block %d\n", i);
            return 0;
        }
    }
    printf("No Fit\n");
}
