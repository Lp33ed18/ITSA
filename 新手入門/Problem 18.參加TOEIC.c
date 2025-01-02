#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    int num = n;
    int mx = 0;
    int a = 0, b = 0;
    double avg;
    while(n--){
        int x;
        scanf("%d", &x);
        mx = (x > mx) ? x : mx;
        avg += x;
        if(x >= 900) a++;
        if(x >= 600 && x <= 700) b++;
    }
    printf("%d\n%d\n%d\n%.1lf\n", mx, a, b, avg / num);

	return 0;
}