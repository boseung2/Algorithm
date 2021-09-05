#include<stdio.h>

int main(void) {
    long input;
    long n;
    long value=1;

    scanf("%ld", &input);

    for(n=0; input >= value; n++) {
        value += n;
    }

    // 1 1 2 3 2 1 1 2 3 4 5 4 3 2 1
    // 1 2 1 1 2 3 4 3 2 1 1 2 3 4 5

    long a = input - (value - n) ;
    long b = n - a;

    if(n % 2 == 0) {
        long tmp = a;
        a = b;
        b = tmp;
    }

    printf("%ld/%ld", a, b);
}
