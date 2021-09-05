#include<stdio.h>

int main(void) {
    long input;
    long n=1; 
    long value=1;

    scanf("%ld", &input);
    
    while(input >= value) {
        value += 6*n++;
    }

    printf("%ld", n);
}