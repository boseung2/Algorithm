#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define SIZE 7

int seperateSum(int n) {
    int m=0, tmp=n;
    for(int i=0; tmp; i++) {
        //printf("n=%d, m=%d, tmp=%d",n, m, tmp);
        m += tmp % 10;
        tmp = tmp / 10;
        
    }
    return n + m;
}

int main(void) {
    int n;
    int result = 0;
    scanf("%d", &n);
    //printf("!!!%d\n", seperateSum(1));

    for(int i=1; i<n; i++) {
        //printf("i=%d, sum=%d\n", i, seperateSum(i));
        if(seperateSum(i) == n) {
            
            result = i;
            break;
        }
    }

    printf("%d\n", result);
}