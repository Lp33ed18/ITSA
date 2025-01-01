#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a;
    scanf("%d", &a);
    int b = 0, c = 0, d = 0;
    while(a >= 10){
        b++;
        a -= 10;
    }
    while(a >= 5){
        c++;
        a -= 5;
    }
    while(a >= 1){
        d++;
        a -= 1;
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", b, c, d);

	return 0;
}