#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int a = pow(n / 100, 3) + pow(n / 10 - n / 100 * 10, 3) + pow(n % 10, 3);
    if((pow(n / 100, 3) + pow(n / 10 - n / 100 * 10, 3) + pow(n % 10, 3)) == n) printf("YES\n");
    else printf("NO\n");


	return 0;
}