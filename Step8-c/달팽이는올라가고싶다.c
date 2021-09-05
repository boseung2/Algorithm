#include<stdio.h>

int main(void) {
    long a, b, v, day, cur;
    scanf("%ld %ld %ld", &a, &b, &v);

    // 낮에 a올라가고 밤에 b내려오고 총 높이는 v
    day = v / (a-b);
    // day가 나머지가 있으면
    if(v % (a-b) != 0) {
        day--;
    }
   

    printf("%ld", day);
}