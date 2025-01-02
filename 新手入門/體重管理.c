#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d", &a);
        if(a < 18.5) printf("體重過輕\n");
        else if(a >= 18.5 && a < 24) printf("正常\n");
        else if(a >= 24 && a < 28) printf("體重過重\n");
        else if(a >= 28) printf("肥胖\n");
    }



	return 0;
}