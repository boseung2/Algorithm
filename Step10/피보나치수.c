#include<stdio.h>

int piv(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", piv(n));

}

int piv(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return piv(n-1) + piv(n-2);
}