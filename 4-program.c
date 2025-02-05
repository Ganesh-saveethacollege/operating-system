#include <stdio.h>

int main() {
    int bt[] = {6, 2, 8}, wt[3] = {0}, tat[3], i, j, temp;
    float awt = 0, atat = 0;

    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
            if (bt[i] > bt[j]) { temp = bt[i]; bt[i] = bt[j]; bt[j] = temp; }

    for (i = 1; i < 3; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (i = 0; i < 3; i++) {
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];
    }

    printf("Avg WT = %.2f, Avg TAT = %.2f\n", awt / 3, atat / 3);
    return 0;
}
