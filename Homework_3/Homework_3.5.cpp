#include<stdio.h>     
int Mypower(int, int);
int main() {
    int input, power;
    scanf("%d %d", &input, &power);
    printf("x=%d n=%d\nAns=%d", input, power, Mypower(input, power));
    return 0;
}

int Mypower(int x, int n) {
    int i, result = 1;
    for (i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}