#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double a;
    scanf("%lf", &a);
    if(a <= 800) a *= 0.9;
    else if(a > 800 && a < 1500) a *= 0.9 * 0.9;
    else a *= 0.9 * 0.79;
    printf("%.1lf\n", a);


	return 0;
}