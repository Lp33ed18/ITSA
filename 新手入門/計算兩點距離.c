#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {

    double a1, b1, a2, b2;
    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
    printf("%.2lf\n", sqrt((fabs(a2 - a1) * fabs(a2 - a1)) + (fabs(b2 - b1) * fabs(b2 - b1))));



	return 0;
}