#include<iostream>

using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    if(x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    for(int i=x; i>0; i--) {
        if(x % i == 0 && y % i == 0) {
            cout << i << "\n";
            break;
        }
    }

    for(int i=y; i<10000*10000; i++) {
        if(i % x == 0 && i % y == 0) {
            cout << i;
            break;
        }
    }

}

/*
#include <stdio.h>

int main(){
	int a,b,i,g=1;
	scanf("%d %d",&a,&b);
	for(i=2;i<=a;i++){
		if(a%i==0&&b%i==0) g=i;
	}
	printf("%d\n%d",g,a*b/g);
}
*/