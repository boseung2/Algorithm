#include<stdio.h>
#define ANSWER_SIZE 10001

int d(int n) {
    int val = n;

    while(n > 0) {
        val += n % 10;
        n = n / 10;
    }

    return val;
}

int main(void) {
    int i;
    int answer[ANSWER_SIZE] = {0};

    for(i=1; i<ANSWER_SIZE; i++) {
        if(d(i) <= ANSWER_SIZE) 
            answer[d(i) - 1] = 1;
    }

    for(i=0; i<ANSWER_SIZE; i++) {
        if(answer[i] == 0) {
            printf("%d\n", i + 1);
        }         
    }

}