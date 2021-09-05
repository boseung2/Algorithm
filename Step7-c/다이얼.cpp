#include<stdio.h>
#include<string.h>
#define LEN 16

int main(void) {
    char input[LEN];
    int result[LEN];
    int sum=0;
    int len;

    gets(input);
    len = strlen(input);

    for(int i=0; i<len; i++) {
        if(input[i] >= 'A' && input[i] <= 'C') {
            result[i] = 3;
        }else if(input [i] >= 'D' && input[i] <= 'F') {
            result[i] = 4;
        }else if(input [i] >= 'G' && input[i] <= 'I') {
            result[i] = 5;
        }else if(input [i] >= 'J' && input[i] <= 'L') {
            result[i] = 6;
        }else if(input [i] >= 'M' && input[i] <= 'O') {
            result[i] = 7;
        }else if(input [i] >= 'P' && input[i] <= 'S') {
            result[i] = 8;
        }else if(input [i] >= 'T' && input[i] <= 'V') {
            result[i] = 9;
        }else if(input [i] >= 'W' && input[i] <= 'Z') {
            result[i] = 10;
        }
    }

    for(int i=0; i<len; i++) {
        sum += result[i];
    }

    printf("%d", sum);

}