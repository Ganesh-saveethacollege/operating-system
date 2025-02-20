#include <stdio.h>
int main() {
    int block[3] = {10, 20, 15}, process = 12, best = -1;
    for (int i = 0; i < 3; i++)
        if (block[i] >= process && (best == -1 || block[i] < block[best])) best = i;
    if (best != -1) printf("Allocated at block %d\n", best);
    else printf("No Fit\n");
}
