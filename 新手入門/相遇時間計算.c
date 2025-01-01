#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    double a;
    scanf("%lf", &a);
    int ans = ceil(a / (1 - 30 * 2.54 / 100));
    printf("%d\n", ans);



	return 0;
}