#include<stdio.h>

int isHanSoo(int n) {
    if(n >= 1 && n <= 99) {
        return 1;
    }
    if(n == 1000) {
        return 0;
    }

    int a,b,c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if((b-a) == (c-b)) {
        return 1;
    }

    return 0;

}

int main(void) {
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        if(isHanSoo(i)) count++;
    }

    printf("%d", count);
    
 }