#include<stdio.h>

int main(void) {
    int n;
    int arr[1000];
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++) {
        int j=i;
        while(arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
            if(j<0)break;
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
}