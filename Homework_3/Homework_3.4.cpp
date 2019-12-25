#include<stdio.h>         
int FindMax(int arr[3][2]);
int main() {
    int i, j;
    int data[3][2];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    printf("%d", FindMax(data));
    return 0;
}

int FindMax(int arr[3][2]) {
    int i, j;
    int max = arr[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}