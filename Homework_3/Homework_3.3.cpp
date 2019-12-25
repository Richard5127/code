#include<stdio.h>    
void average(int array[3][4]);
int main() {
    int i, j;
    int num[3][4] = { { 88, 79, 91, 0 },
                      { 86, 84, 90, 0 },
                      { 77, 65, 70, 0 } };
    average(num);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void average(int array[3][4]) {
    int i, j, sum;
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += array[i][j];
        }
        array[i][3] = sum / 3;
    }
}