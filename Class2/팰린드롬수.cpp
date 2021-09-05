#include<stdio.h>
#include<string.h>
#define SIZE 100000

int main(void) {
    char input[SIZE];
    int isPal = 1;

    while(1) {
        scanf("%s", input);
        if(!strcmp(input, "0")) {
            break;
        }
        
        int length = strlen(input);
        isPal = 1;
        
        for(int i=0; i<length/2; i++) {
            if(input[i] != input[length-i-1]) {
                isPal = 0;
                break;
            }
        }

        if(isPal) {
            printf("yes\n");
        } else {
            printf("no\n");
        }

    }
}