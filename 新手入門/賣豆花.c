#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a;
    scanf("%d", &a);
    printf("百元 %d\n十元 %d\n壹元 %d\n", a / 100, a / 10 - a / 100 * 10, a % 10);



	return 0;
}