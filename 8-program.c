#include <stdio.h>

int main() {
    int bt[] = {5, 7, 3}, tq = 3, wt[3] = {0}, tat[3], time = 0, i, rem_bt[3];
    float awt = 0, atat = 0;

    for (i = 0; i < 3; i++) rem_bt[i] = bt[i];

    while (1) {
        int done = 1;
        for (i = 0; i < 3; i++) {
            if (rem_bt[i] > 0) {
                done = 0;
                if (rem_bt[i] > tq) {
                    time += tq;
                    rem_bt[i] -= tq;
                } else {
                    time += rem_bt[i];
                    wt[i] = time - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (done) break;
    }

    for (i = 0; i < 3; i++) {
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];
    }

    printf("Avg WT = %.2f, Avg TAT = %.2f\n", awt / 3, atat / 3);
    return 0;
}
