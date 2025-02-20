#include <stdio.h>
int main() {
    int block[3] = {10, 20, 15}, process = 12, worst = -1;
    for (int i = 0; i < 3; i++)
        if (block[i] >= process && (worst == -1 || block[i] > block[worst])) worst = i;
    if (worst != -1) printf("Allocated at block %d\n", worst);
    else printf("No Fit\n");
}
