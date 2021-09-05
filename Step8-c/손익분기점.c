#include<stdio.h>

int main(void) {
    long a, b, c;
    long n = 0;

    scanf("%ld %ld %ld", &a, &b, &c);

    if(b >= c) {
        n = -1;
    } else {
        n = a / (c - b) + 1;
    }
    
    printf("%ld", n);
    
}