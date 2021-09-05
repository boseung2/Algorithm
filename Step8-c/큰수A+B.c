#include<stdio.h>
#include<string.h>
#define SIZE 10000

int main(void) {
    char a[SIZE], b[SIZE];
    scanf("%s %s", a, b);
    
    int LEN = strlen(a);
    int LENB = strlen(b);

    printf("%d %d", LEN, LENB);

}