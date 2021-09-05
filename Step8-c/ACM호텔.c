#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int count;

    scanf("%d", &count);

    int* h = (int*)malloc(sizeof(int) * count);
    int* w = (int*)malloc(sizeof(int) * count);
    int* n = (int*)malloc(sizeof(int) * count);

    for(int i=0; i<count; i++) {
        scanf("%d %d %d", &h[i], &w[i], &n[i]);
    }

    for(int i=0; i<count; i++) {
        int result = ((n[i] % h[i] == 0) ? h[i] : n[i] % h[i]) * 100;
        result += (n[i] % h[i] == 0) ? n[i] / h[i] : n[i] / h[i] + 1;
        printf("%d\n", result);
    }

}