#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    if(n >= 100) printf("%d\n", 10 * 7 * n);
    else if(n >= 30) printf("%d\n", 10 * 8 * n);
    else if(n >= 10) printf("%d\n", 10 * 9 * n);
    else printf("%d\n", 100 * n);
	return 0;
}