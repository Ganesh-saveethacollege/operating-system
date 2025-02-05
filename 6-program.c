#include <stdio.h>

int main() {
    int bt[] = {3, 6, 1}, pri[] = {3, 1, 2}, i, j, temp;

    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
            if (pri[i] > pri[j]) {
                temp = pri[i]; pri[i] = pri[j]; pri[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
            }

    for (i = 0; i < 3; i++)
        printf("P%d: Priority = %d, BT = %d\n", i + 1, pri[i], bt[i]);

    return 0;
}
