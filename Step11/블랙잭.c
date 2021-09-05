#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int main(void) {
    int n, m;
    int arr[SIZE];
    int sum, result=0;

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= m && result < sum) result = sum;
            }
        }
    }

    printf("%d\n", result);

}